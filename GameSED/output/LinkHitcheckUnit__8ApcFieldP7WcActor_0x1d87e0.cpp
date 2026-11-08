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

// Function: LinkHitcheckUnit__8ApcFieldP7WcActor
// Address: 0x1d87e0 - 0x1d885c
void LinkHitcheckUnit__8ApcFieldP7WcActor_0x1d87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkHitcheckUnit__8ApcFieldP7WcActor_0x1d87e0");
#endif

    switch (ctx->pc) {
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        default: break;
    }

    ctx->pc = 0x1d87e0u;

label_1d87e0:
    // 0x1d87e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d87e4:
    // 0x1d87e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d87e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d87e8:
    // 0x1d87e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d87e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d87ec:
    // 0x1d87ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d87ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d87f0:
    // 0x1d87f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d87f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d87f4:
    // 0x1d87f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d87f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d87f8:
    // 0x1d87f8: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
label_1d87fc:
    // 0x1d87fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d87fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d8800:
    // 0x1d8800: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8804:
    // 0x1d8804: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1d8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_1d8808:
    // 0x1d8808: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d880c:
    if (ctx->pc == 0x1D880Cu) {
        ctx->pc = 0x1D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8808u;
        // 0x1d880c: 0x26240200  addiu       $a0, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8810u;
        goto label_1d8810;
    }
    ctx->pc = 0x1D8808u;
    {
        const bool branch_taken_0x1d8808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8808u;
        // 0x1d880c: 0x26240200  addiu       $a0, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8808) {
            ctx->pc = 0x1D8824u;
            goto label_1d8824;
        }
    }
    ctx->pc = 0x1D8810u;
label_1d8810:
    // 0x1d8810: 0xc0683b6  jal         func_1A0ED8
label_1d8814:
    if (ctx->pc == 0x1D8814u) {
        ctx->pc = 0x1D8818u;
        goto label_1d8818;
    }
    ctx->pc = 0x1D8810u;
    SET_GPR_U32(ctx, 31, 0x1D8818u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1D8810u, 0x1D8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d881c:
    // 0x1d881c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1d881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_1d8820:
    // 0x1d8820: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d8820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1d8824:
    // 0x1d8824: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d8828:
    // 0x1d8828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d882c:
    // 0x1d882c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8830:
    // 0x1d8830: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d8834:
    // 0x1d8834: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8838:
    // 0x1d8838: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d883c:
    // 0x1d883c: 0x60f809  jalr        $v1
label_1d8840:
    if (ctx->pc == 0x1D8840u) {
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8844u;
        goto label_1d8844;
    }
    ctx->pc = 0x1D883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8844u);
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8848:
    // 0x1d8848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d884c:
    // 0x1d884c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d884cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8850:
    // 0x1d8850: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d8854:
    // 0x1d8854: 0x3e00008  jr          $ra
label_1d8858:
    if (ctx->pc == 0x1D8858u) {
        ctx->pc = 0x1D8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8854u;
        // 0x1d8858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D885Cu;
        goto label_fallthrough_0x1d8854;
    }
    ctx->pc = 0x1D8854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8854u;
        // 0x1d8858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8854:
    ctx->pc = 0x1D885Cu;
}
