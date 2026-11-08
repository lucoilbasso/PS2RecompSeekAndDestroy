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

// Function: entry_0018e934
// Address: 0x18e934 - 0x18e958
void entry_0018e934_0x18e934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e934_0x18e934");
#endif

    ctx->pc = 0x18e934u;

    // 0x18e934: 0x24a3ffdf  addiu       $v1, $a1, -0x21
    ctx->pc = 0x18e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    // 0x18e938: 0x24a4ffe0  addiu       $a0, $a1, -0x20
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x18e93c: 0x2c63005f  sltiu       $v1, $v1, 0x5F
    ctx->pc = 0x18e93cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x18e940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e944: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x18e944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x18e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e94c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x18e94cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x18e950: 0x3e00008  jr          $ra
    ctx->pc = 0x18E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E950u;
        // 0x18e954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E958u;
}
