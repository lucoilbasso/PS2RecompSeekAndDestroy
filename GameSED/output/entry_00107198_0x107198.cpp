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

// Function: entry_00107198
// Address: 0x107198 - 0x107204
void entry_00107198_0x107198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107198_0x107198");
#endif

    switch (ctx->pc) {
        case 0x1071b8u: goto label_1071b8;
        case 0x1071e8u: goto label_1071e8;
        case 0x107200u: goto label_107200;
        default: break;
    }

    ctx->pc = 0x107198u;

    // 0x107198: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x107198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10719c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1071a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1071a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1071a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1071a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1071a8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1071a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1071ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1071acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071b0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1071B0u;
    SET_GPR_U32(ctx, 31, 0x1071B8u);
    ctx->pc = 0x1071B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071B0u;
    // 0x1071b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1071B0u, 0x1071B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071B8u;
label_1071b8:
    // 0x1071b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1071b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1071bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1071bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1071c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1071c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1071c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1071c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1071cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1071CCu;
    {
        const bool branch_taken_0x1071cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071CCu;
        // 0x1071d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071cc) {
            ctx->pc = 0x107230u;
            return;
        }
    }
    ctx->pc = 0x1071D4u;
    // 0x1071d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1071d8: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1071D8u;
    {
        const bool branch_taken_0x1071d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1071d8) {
            ctx->pc = 0x1071DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1071D8u;
            // 0x1071dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107204u;
            return;
        }
    }
    ctx->pc = 0x1071E0u;
    // 0x1071e0: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1071E0u;
    SET_GPR_U32(ctx, 31, 0x1071E8u);
    ctx->pc = 0x1071E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071E0u;
    // 0x1071e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1071E0u, 0x1071E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071E8u;
label_1071e8:
    // 0x1071e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1071ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1071ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071f0: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x1071f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x1071f4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1071f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1071f8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1071F8u;
    SET_GPR_U32(ctx, 31, 0x107200u);
    ctx->pc = 0x1071FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071F8u;
    // 0x1071fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1071F8u, 0x107200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107200u;
label_107200:
    // 0x107200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107204u;
}
