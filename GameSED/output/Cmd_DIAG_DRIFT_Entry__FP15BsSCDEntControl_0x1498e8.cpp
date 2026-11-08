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

// Function: Cmd_DIAG_DRIFT_Entry__FP15BsSCDEntControl
// Address: 0x1498e8 - 0x1499b4
void Cmd_DIAG_DRIFT_Entry__FP15BsSCDEntControl_0x1498e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_DRIFT_Entry__FP15BsSCDEntControl_0x1498e8");
#endif

    switch (ctx->pc) {
        case 0x149924u: goto label_149924;
        case 0x149960u: goto label_149960;
        case 0x149994u: goto label_149994;
        case 0x1499a0u: goto label_1499a0;
        default: break;
    }

    ctx->pc = 0x1498e8u;

    // 0x1498e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1498ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1498ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1498f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1498f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1498f4: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x1498f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x1498f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1498f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1498fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1498fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149904: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149908: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x14990c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14990Cu;
    {
        const bool branch_taken_0x14990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14990Cu;
        // 0x149910: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14990c) {
            ctx->pc = 0x149928u;
            goto label_149928;
        }
    }
    ctx->pc = 0x149914u;
    // 0x149914: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149918: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14991c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14991Cu;
    SET_GPR_U32(ctx, 31, 0x149924u);
    ctx->pc = 0x149920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14991Cu;
    // 0x149920: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14991Cu, 0x149924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149924u;
label_149924:
    // 0x149924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149928:
    // 0x149928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14992c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14992cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149930: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149938: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14993c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14993cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149940: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149944: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x149944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x149948: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14994c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x14994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149950: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149954: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149958: 0xc05250a  jal         func_149428
    ctx->pc = 0x149958u;
    SET_GPR_U32(ctx, 31, 0x149960u);
    ctx->pc = 0x14995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149958u;
    // 0x14995c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149958u, 0x149960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149960u;
label_149960:
    // 0x149960: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149964: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149964u;
    {
        const bool branch_taken_0x149964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149964u;
        // 0x149968: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149964) {
            ctx->pc = 0x149984u;
            goto label_149984;
        }
    }
    ctx->pc = 0x14996Cu;
    // 0x14996c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149970: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149970u;
    {
        const bool branch_taken_0x149970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149970) {
            ctx->pc = 0x149984u;
            goto label_149984;
        }
    }
    ctx->pc = 0x149978u;
    // 0x149978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14997c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_149984:
    // 0x149984: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x149984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x149988: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x149988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14998c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x14998Cu;
    SET_GPR_U32(ctx, 31, 0x149994u);
    ctx->pc = 0x149990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14998Cu;
    // 0x149990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x14998Cu, 0x149994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149994u;
label_149994:
    // 0x149994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149998: 0xc052590  jal         func_149640
    ctx->pc = 0x149998u;
    SET_GPR_U32(ctx, 31, 0x1499A0u);
    ctx->pc = 0x14999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149998u;
    // 0x14999c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149640u, 0x149998u, 0x1499A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499A0u;
label_1499a0:
    // 0x1499a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1499a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1499a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1499a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1499a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1499ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1499ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1499B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499ACu;
        // 0x1499b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1499ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1499B4u;
}
