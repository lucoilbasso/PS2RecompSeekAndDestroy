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

// Function: entry_001d6080
// Address: 0x1d6080 - 0x1d60f4
void entry_001d6080_0x1d6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6080_0x1d6080");
#endif

    switch (ctx->pc) {
        case 0x1d60a4u: goto label_1d60a4;
        default: break;
    }

    ctx->pc = 0x1d6080u;

    // 0x1d6080: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d6084: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d6088: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d608c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d6090: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d6090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6094: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d6098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d609c: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D609Cu;
    SET_GPR_U32(ctx, 31, 0x1D60A4u);
    ctx->pc = 0x1D60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D609Cu;
    // 0x1d60a0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D609Cu, 0x1D60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60A4u;
label_1d60a4:
    // 0x1d60a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d60a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1d60ac: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1d60acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d60b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d60b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d60b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d60bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d60bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d60c0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1d60c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1d60c4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1d60c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d60c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d60cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d60ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d60d0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d60d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d60d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d60d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d60d8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x1d60dc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1d60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1d60e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D60E0u;
    {
        const bool branch_taken_0x1d60e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60E0u;
        // 0x1d60e4: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60e0) {
            ctx->pc = 0x1D60F4u;
            return;
        }
    }
    ctx->pc = 0x1D60E8u;
    // 0x1d60e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1d60ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1d60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d60f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1d60f4u;
}
