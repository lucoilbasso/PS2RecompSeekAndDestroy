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

// Function: entry_00114288
// Address: 0x114288 - 0x1142c8
void entry_00114288_0x114288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114288_0x114288");
#endif

    switch (ctx->pc) {
        case 0x1142a0u: goto label_1142a0;
        default: break;
    }

    ctx->pc = 0x114288u;

    // 0x114288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11428c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x114290: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x114290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x114294: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x114294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x114298: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114298u;
    SET_GPR_U32(ctx, 31, 0x1142A0u);
    ctx->pc = 0x11429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114298u;
    // 0x11429c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114298u, 0x1142A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142A0u;
label_1142a0:
    // 0x1142a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1142a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1142a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1142a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1142a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1142ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1142acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142b0: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1142B0u;
    {
        const bool branch_taken_0x1142b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1142B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142B0u;
        // 0x1142b4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142b0) {
            ctx->pc = 0x1142F0u;
            return;
        }
    }
    ctx->pc = 0x1142B8u;
    // 0x1142b8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1142b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1142bc: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1142c0: 0x2453c058  addiu       $s3, $v0, -0x3FA8
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951000));
    // 0x1142c4: 0x0  nop
    ctx->pc = 0x1142c4u;
    // NOP
    ctx->pc = 0x1142c8u;
}
