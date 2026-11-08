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

// Function: entry_001159e4
// Address: 0x1159e4 - 0x115a0c
void entry_001159e4_0x1159e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001159e4_0x1159e4");
#endif

    switch (ctx->pc) {
        case 0x115a04u: goto label_115a04;
        default: break;
    }

    ctx->pc = 0x1159e4u;

    // 0x1159e4: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x1159e4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1159e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1159e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159ec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1159f0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1159f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1159f4: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x1159f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x1159f8: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1159fc: 0xc041882  jal         func_106208
    ctx->pc = 0x1159FCu;
    SET_GPR_U32(ctx, 31, 0x115A04u);
    ctx->pc = 0x115A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159FCu;
    // 0x115a00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1159FCu, 0x115A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A04u;
label_115a04:
    // 0x115a04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115a08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x115a0cu;
}
