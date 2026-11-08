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

// Function: entry_0016b6e4
// Address: 0x16b6e4 - 0x16b708
void entry_0016b6e4_0x16b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b6e4_0x16b6e4");
#endif

    ctx->pc = 0x16b6e4u;

    // 0x16b6e4: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x16b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x16b6e8: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x16b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x16b6ec: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x16b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x16b6f0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16b6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16b6f4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16b6f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B6F8u;
    {
        const bool branch_taken_0x16b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f8) {
            ctx->pc = 0x16B708u;
            return;
        }
    }
    ctx->pc = 0x16B700u;
    // 0x16b700: 0xc061920  jal         func_186480
    ctx->pc = 0x16B700u;
    SET_GPR_U32(ctx, 31, 0x16B708u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16B700u, 0x16B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B708u;
}
