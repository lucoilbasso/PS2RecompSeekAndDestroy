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

// Function: caseD_3
// Address: 0x133270 - 0x1332b8
void caseD_3_0x133270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x133270");
#endif

    switch (ctx->pc) {
        case 0x133288u: goto label_133288;
        default: break;
    }

    ctx->pc = 0x133270u;

    // 0x133270: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133274: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133278: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x133278u;
    {
        const bool branch_taken_0x133278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133278) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133280u;
    // 0x133280: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133280u;
    SET_GPR_U32(ctx, 31, 0x133288u);
    ctx->pc = 0x133284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133280u;
    // 0x133284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133280u, 0x133288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133288u;
label_133288:
    // 0x133288: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x133288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13328c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133290: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133290u;
    {
        const bool branch_taken_0x133290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133290) {
            ctx->pc = 0x133294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133290u;
            // 0x133294: 0x8e02075c  lw          $v0, 0x75C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1884)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            return;
        }
    }
    ctx->pc = 0x133298u;
    // 0x133298: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x133298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13329c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13329Cu;
    {
        const bool branch_taken_0x13329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13329Cu;
        // 0x1332a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13329c) {
            ctx->pc = 0x1332B8u;
            return;
        }
    }
    ctx->pc = 0x1332A4u;
    // 0x1332a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1332a8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1332A8u;
    {
        const bool branch_taken_0x1332a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1332a8) {
            ctx->pc = 0x1332ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1332A8u;
            // 0x1332ac: 0x8e02071c  lw          $v0, 0x71C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            return;
        }
    }
    ctx->pc = 0x1332B0u;
    // 0x1332b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1332B0u;
    {
        const bool branch_taken_0x1332b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332b0) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x1332B8u;
}
