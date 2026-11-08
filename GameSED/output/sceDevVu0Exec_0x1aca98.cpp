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

// Function: sceDevVu0Exec
// Address: 0x1aca98 - 0x1acaa8
void sceDevVu0Exec_0x1aca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0Exec_0x1aca98");
#endif

    ctx->pc = 0x1aca98u;

    // 0x1aca98: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1aca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1aca9c: 0x48c4d800  ctc2.ni     $a0, $vi27
    ctx->pc = 0x1aca9cu;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x1acaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x4a00d839  vcallmsr    $vi27 (Delay Slot)
        {     uint16_t instr_index = ctx->vi[27] & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACAA8u;
}
