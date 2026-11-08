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

// Function: entry_00151de8
// Address: 0x151de8 - 0x151e00
void entry_00151de8_0x151de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151de8_0x151de8");
#endif

    ctx->pc = 0x151de8u;

    // 0x151de8: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x151dec: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x151decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151DF0u;
    {
        const bool branch_taken_0x151df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DF0u;
        // 0x151df4: 0x26510870  addiu       $s1, $s2, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df0) {
            ctx->pc = 0x151E00u;
            return;
        }
    }
    ctx->pc = 0x151DF8u;
    // 0x151df8: 0xc061920  jal         func_186480
    ctx->pc = 0x151DF8u;
    SET_GPR_U32(ctx, 31, 0x151E00u);
    ctx->pc = 0x151DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DF8u;
    // 0x151dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151DF8u, 0x151E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E00u;
}
