#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001d49f8
// Address: 0x1d49f8 - 0x1d4a28
void entry_001d49f8_0x1d49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d49f8_0x1d49f8");
#endif

    ctx->pc = 0x1d49f8u;

    // 0x1d49f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d49fc: 0x250182f  dsubu       $v1, $s2, $s0
    ctx->pc = 0x1d49fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
    // 0x1d4a00: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1d4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d4a04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d4a08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d4a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4a0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d4a0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d4a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a14: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1d4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1d4a18: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d4a1c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4a20: 0xc074086  jal         func_1D0218
    ctx->pc = 0x1D4A20u;
    SET_GPR_U32(ctx, 31, 0x1D4A28u);
    ctx->pc = 0x1D4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A20u;
    // 0x1d4a24: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0218u, 0x1D4A20u, 0x1D4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A28u;
}
