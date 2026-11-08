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

// Function: entry_00194294
// Address: 0x194294 - 0x1942cc
void entry_00194294_0x194294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194294_0x194294");
#endif

    ctx->pc = 0x194294u;

    // 0x194294: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x194298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19429c: 0x8cb3015c  lw          $s3, 0x15C($a1)
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x1942a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1942a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1942a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1942a8: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1942A8u;
    {
        const bool branch_taken_0x1942a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942A8u;
        // 0x1942ac: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942a8) {
            ctx->pc = 0x1944D4u;
            return;
        }
    }
    ctx->pc = 0x1942B0u;
    // 0x1942b0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1942b4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1942b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1942b8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1942b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1942bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942BCu;
    {
        const bool branch_taken_0x1942bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942bc) {
            ctx->pc = 0x1942CCu;
            return;
        }
    }
    ctx->pc = 0x1942C4u;
    // 0x1942c4: 0xc061920  jal         func_186480
    ctx->pc = 0x1942C4u;
    SET_GPR_U32(ctx, 31, 0x1942CCu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1942C4u, 0x1942CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942CCu;
}
