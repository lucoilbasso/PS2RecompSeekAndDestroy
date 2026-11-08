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

// Function: entry_0012e1e0
// Address: 0x12e1e0 - 0x12e240
void entry_0012e1e0_0x12e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e1e0_0x12e1e0");
#endif

    switch (ctx->pc) {
        case 0x12e204u: goto label_12e204;
        case 0x12e21cu: goto label_12e21c;
        default: break;
    }

    ctx->pc = 0x12e1e0u;

    // 0x12e1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e1e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12e1e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e1f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e1f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12e1f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12e1fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E1FCu;
    SET_GPR_U32(ctx, 31, 0x12E204u);
    ctx->pc = 0x12E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1FCu;
    // 0x12e200: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E1FCu, 0x12E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E204u;
label_12e204:
    // 0x12e204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e208: 0x52000064  beql        $s0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x12E208u;
    {
        const bool branch_taken_0x12e208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e208) {
            ctx->pc = 0x12E20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E208u;
            // 0x12e20c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E39Cu;
            return;
        }
    }
    ctx->pc = 0x12E210u;
    // 0x12e210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e214: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E214u;
    SET_GPR_U32(ctx, 31, 0x12E21Cu);
    ctx->pc = 0x12E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E214u;
    // 0x12e218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E214u, 0x12E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E21Cu;
label_12e21c:
    // 0x12e21c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x12e21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e224: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E224u;
    {
        const bool branch_taken_0x12e224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E224u;
        // 0x12e228: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e224) {
            ctx->pc = 0x12E240u;
            return;
        }
    }
    ctx->pc = 0x12E22Cu;
    // 0x12e22c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e230: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x12e230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x12e234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12e238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E238u;
    {
        const bool branch_taken_0x12e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E238u;
        // 0x12e23c: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e238) {
            ctx->pc = 0x12E25Cu;
            return;
        }
    }
    ctx->pc = 0x12E240u;
}
