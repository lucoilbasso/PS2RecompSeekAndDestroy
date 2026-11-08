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

// Function: ConvertFixed32IOPParam__9WcSpu2Manii
// Address: 0x17a700 - 0x17a724
void ConvertFixed32IOPParam__9WcSpu2Manii_0x17a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertFixed32IOPParam__9WcSpu2Manii_0x17a700");
#endif

    ctx->pc = 0x17a700u;

    // 0x17a700: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17a700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a704: 0x38c33fff  xori        $v1, $a2, 0x3FFF
    ctx->pc = 0x17a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)16383);
    // 0x17a708: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17a70c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x17a70cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x17a710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a714: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x17a714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17a718: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x17a718u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x17a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A71Cu;
        // 0x17a720: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A724u;
}
