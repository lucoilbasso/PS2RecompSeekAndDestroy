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

// Function: ModelBankInfoClose__9ApcObjRsc
// Address: 0x1d71e8 - 0x1d7280
void ModelBankInfoClose__9ApcObjRsc_0x1d71e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelBankInfoClose__9ApcObjRsc_0x1d71e8");
#endif

    switch (ctx->pc) {
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        default: break;
    }

    ctx->pc = 0x1d71e8u;

label_1d71e8:
    // 0x1d71e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d71ec:
    // 0x1d71ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d71ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d71f0:
    // 0x1d71f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d71f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d71f4:
    // 0x1d71f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d71f8:
    // 0x1d71f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d71fc:
    // 0x1d71fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d71fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d7200:
    // 0x1d7200: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1d7204:
    // 0x1d7204: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1d7208:
    if (ctx->pc == 0x1D7208u) {
        ctx->pc = 0x1D7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7204u;
        // 0x1d7208: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D720Cu;
        goto label_1d720c;
    }
    ctx->pc = 0x1D7204u;
    {
        const bool branch_taken_0x1d7204 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7204u;
        // 0x1d7208: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7204) {
            ctx->pc = 0x1D725Cu;
            goto label_1d725c;
        }
    }
    ctx->pc = 0x1D720Cu;
label_1d720c:
    // 0x1d720c: 0x0  nop
    ctx->pc = 0x1d720cu;
    // NOP
label_1d7210:
    // 0x1d7210: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1d7214:
    // 0x1d7214: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1d7218:
    // 0x1d7218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d721c:
    // 0x1d721c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d721cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7220:
    // 0x1d7220: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7224:
    // 0x1d7224: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d7228:
    if (ctx->pc == 0x1D7228u) {
        ctx->pc = 0x1D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7224u;
        // 0x1d7228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D722Cu;
        goto label_1d722c;
    }
    ctx->pc = 0x1D7224u;
    {
        const bool branch_taken_0x1d7224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7224u;
        // 0x1d7228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7224) {
            ctx->pc = 0x1D7248u;
            goto label_1d7248;
        }
    }
    ctx->pc = 0x1D722Cu;
label_1d722c:
    // 0x1d722c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7230:
    // 0x1d7230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7234:
    // 0x1d7234: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7238:
    // 0x1d7238: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d723c:
    // 0x1d723c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7240:
    // 0x1d7240: 0x60f809  jalr        $v1
label_1d7244:
    if (ctx->pc == 0x1D7244u) {
        ctx->pc = 0x1D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7240u;
        // 0x1d7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7248u;
        goto label_1d7248;
    }
    ctx->pc = 0x1D7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D7248u);
        ctx->pc = 0x1D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7240u;
        // 0x1d7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7240u, 0x1D7248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7248u;
label_1d7248:
    // 0x1d7248: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1d724c:
    // 0x1d724c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d7250:
    // 0x1d7250: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d7250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7254:
    // 0x1d7254: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1d7258:
    if (ctx->pc == 0x1D7258u) {
        ctx->pc = 0x1D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7254u;
        // 0x1d7258: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D725Cu;
        goto label_1d725c;
    }
    ctx->pc = 0x1D7254u;
    {
        const bool branch_taken_0x1d7254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7254u;
        // 0x1d7258: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7254) {
            ctx->pc = 0x1D7210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7210;
        }
    }
    ctx->pc = 0x1D725Cu;
label_1d725c:
    // 0x1d725c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1d7260:
    // 0x1d7260: 0xc067f04  jal         func_19FC10
label_1d7264:
    if (ctx->pc == 0x1D7264u) {
        ctx->pc = 0x1D7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7260u;
        // 0x1d7264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7268u;
        goto label_1d7268;
    }
    ctx->pc = 0x1D7260u;
    SET_GPR_U32(ctx, 31, 0x1D7268u);
    ctx->pc = 0x1D7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7260u;
    // 0x1d7264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D7260u, 0x1D7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7268u;
label_1d7268:
    // 0x1d7268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d726c:
    // 0x1d726c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d726cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d7270:
    // 0x1d7270: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7274:
    // 0x1d7274: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d7278:
    // 0x1d7278: 0x3e00008  jr          $ra
label_1d727c:
    if (ctx->pc == 0x1D727Cu) {
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7280u;
        goto label_fallthrough_0x1d7278;
    }
    ctx->pc = 0x1D7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7278:
    ctx->pc = 0x1D7280u;
}
