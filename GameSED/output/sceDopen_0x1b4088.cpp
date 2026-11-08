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

// Function: sceDopen
// Address: 0x1b4088 - 0x1b4150
void sceDopen_0x1b4088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDopen_0x1b4088");
#endif

    switch (ctx->pc) {
        case 0x1b40a8u: goto label_1b40a8;
        case 0x1b40c0u: goto label_1b40c0;
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40d0u: goto label_1b40d0;
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b4100u: goto label_1b4100;
        case 0x1b4114u: goto label_1b4114;
        case 0x1b4134u: goto label_1b4134;
        default: break;
    }

    ctx->pc = 0x1b4088u;

    // 0x1b4088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b408c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b4094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b4098: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b409c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b40a0: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B40A0u;
    SET_GPR_U32(ctx, 31, 0x1B40A8u);
    ctx->pc = 0x1B40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40A0u;
    // 0x1b40a4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B40A0u, 0x1B40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40A8u;
label_1b40a8:
    // 0x1b40a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b40ac: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b40acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b40b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B40B0u;
    {
        const bool branch_taken_0x1b40b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b40b0) {
            ctx->pc = 0x1B40C0u;
            goto label_1b40c0;
        }
    }
    ctx->pc = 0x1B40B8u;
    // 0x1b40b8: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B40B8u;
    SET_GPR_U32(ctx, 31, 0x1B40C0u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B40B8u, 0x1B40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40C0u;
label_1b40c0:
    // 0x1b40c0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B40C0u;
    SET_GPR_U32(ctx, 31, 0x1B40C8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B40C0u, 0x1B40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40C8u;
label_1b40c8:
    // 0x1b40c8: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x1B40C8u;
    SET_GPR_U32(ctx, 31, 0x1B40D0u);
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x1B40C8u, 0x1B40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40D0u;
label_1b40d0:
    // 0x1b40d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b40d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B40D4u;
    {
        const bool branch_taken_0x1b40d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40D4u;
        // 0x1b40d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40d4) {
            ctx->pc = 0x1B40E4u;
            goto label_1b40e4;
        }
    }
    ctx->pc = 0x1B40DCu;
    // 0x1b40dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B40DCu;
    {
        const bool branch_taken_0x1b40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40DCu;
        // 0x1b40e0: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40dc) {
            ctx->pc = 0x1B4138u;
            goto label_1b4138;
        }
    }
    ctx->pc = 0x1B40E4u;
label_1b40e4:
    // 0x1b40e4: 0xc06ce50  jal         func_1B3940
    ctx->pc = 0x1B40E4u;
    SET_GPR_U32(ctx, 31, 0x1B40ECu);
    ctx->pc = 0x1B40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40E4u;
    // 0x1b40e8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3940u, 0x1B40E4u, 0x1B40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40ECu;
label_1b40ec:
    // 0x1b40ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b40ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40f0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B40F0u;
    {
        const bool branch_taken_0x1b40f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40F0u;
        // 0x1b40f4: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40f0) {
            ctx->pc = 0x1B410Cu;
            goto label_1b410c;
        }
    }
    ctx->pc = 0x1B40F8u;
    // 0x1b40f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B40F8u;
    SET_GPR_U32(ctx, 31, 0x1B4100u);
    ctx->pc = 0x1B40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40F8u;
    // 0x1b40fc: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B40F8u, 0x1B4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4100u;
label_1b4100:
    // 0x1b4100: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b4104: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4104u;
    {
        const bool branch_taken_0x1b4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4104u;
        // 0x1b4108: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4104) {
            ctx->pc = 0x1B412Cu;
            goto label_1b412c;
        }
    }
    ctx->pc = 0x1B410Cu;
label_1b410c:
    // 0x1b410c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B410Cu;
    SET_GPR_U32(ctx, 31, 0x1B4114u);
    ctx->pc = 0x1B4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B410Cu;
    // 0x1b4110: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B410Cu, 0x1B4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4114u;
label_1b4114:
    // 0x1b4114: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b4118: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b4118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b411c: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1b4120: 0x8e04aa10  lw          $a0, -0x55F0($s0)
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    // 0x1b4124: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b4128: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_1b412c:
    // 0x1b412c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B412Cu;
    SET_GPR_U32(ctx, 31, 0x1B4134u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B412Cu, 0x1B4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4134u;
label_1b4134:
    // 0x1b4134: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4138:
    // 0x1b4138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b413c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b413cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4140: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b4140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4148u;
        // 0x1b414c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4150u;
}
