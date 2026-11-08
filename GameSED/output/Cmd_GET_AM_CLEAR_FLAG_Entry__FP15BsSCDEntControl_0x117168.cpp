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

// Function: Cmd_GET_AM_CLEAR_FLAG_Entry__FP15BsSCDEntControl
// Address: 0x117168 - 0x1172e8
void Cmd_GET_AM_CLEAR_FLAG_Entry__FP15BsSCDEntControl_0x117168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_AM_CLEAR_FLAG_Entry__FP15BsSCDEntControl_0x117168");
#endif

    switch (ctx->pc) {
        case 0x1171b8u: goto label_1171b8;
        case 0x1171c8u: goto label_1171c8;
        case 0x1171ecu: goto label_1171ec;
        case 0x1171fcu: goto label_1171fc;
        case 0x117260u: goto label_117260;
        case 0x117284u: goto label_117284;
        case 0x117294u: goto label_117294;
        default: break;
    }

    ctx->pc = 0x117168u;

    // 0x117168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11716c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x117170: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x117170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11717c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x117180: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x117184: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x117184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x117188: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x117188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11718c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x117190: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x117190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x117194: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x117194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x117198: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x117198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11719c: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x11719cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x1171a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1171a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171a4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1171a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171a8: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x1171a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    // 0x1171ac: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1171b0: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x1171b4: 0x26b5c540  addiu       $s5, $s5, -0x3AC0
    ctx->pc = 0x1171b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952256));
label_1171b8:
    // 0x1171b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1171b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171bc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1171bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171c0: 0x2e530008  sltiu       $s3, $s2, 0x8
    ctx->pc = 0x1171c0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1171c4: 0x26b11c10  addiu       $s1, $s5, 0x1C10
    ctx->pc = 0x1171c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 7184));
label_1171c8:
    // 0x1171c8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1171C8u;
    {
        const bool branch_taken_0x1171c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C8u;
        // 0x1171cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c8) {
            ctx->pc = 0x1171E0u;
            goto label_1171e0;
        }
    }
    ctx->pc = 0x1171D0u;
    // 0x1171d0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1171D0u;
    {
        const bool branch_taken_0x1171d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1171D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D0u;
        // 0x1171d4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d0) {
            ctx->pc = 0x1171E0u;
            goto label_1171e0;
        }
    }
    ctx->pc = 0x1171D8u;
    // 0x1171d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1171D8u;
    {
        const bool branch_taken_0x1171d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1171d8) {
            ctx->pc = 0x1171DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1171D8u;
            // 0x1171dc: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117200u;
            goto label_117200;
        }
    }
    ctx->pc = 0x1171E0u;
label_1171e0:
    // 0x1171e0: 0x27c442c0  addiu       $a0, $fp, 0x42C0
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 17088));
    // 0x1171e4: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1171E4u;
    SET_GPR_U32(ctx, 31, 0x1171ECu);
    ctx->pc = 0x1171E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171E4u;
    // 0x1171e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1171E4u, 0x1171ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171ECu;
label_1171ec:
    // 0x1171ec: 0x26e4c540  addiu       $a0, $s7, -0x3AC0
    ctx->pc = 0x1171ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952256));
    // 0x1171f0: 0x26c5d1a0  addiu       $a1, $s6, -0x2E60
    ctx->pc = 0x1171f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955424));
    // 0x1171f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1171F4u;
    SET_GPR_U32(ctx, 31, 0x1171FCu);
    ctx->pc = 0x1171F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171F4u;
    // 0x1171f8: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1171F4u, 0x1171FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171FCu;
label_1171fc:
    // 0x1171fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1171fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_117200:
    // 0x117200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117200u;
    {
        const bool branch_taken_0x117200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117200u;
        // 0x117204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117200) {
            ctx->pc = 0x117218u;
            goto label_117218;
        }
    }
    ctx->pc = 0x117208u;
    // 0x117208: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11720c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x11720cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x117210: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x117210u;
    {
        const bool branch_taken_0x117210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117210) {
            ctx->pc = 0x1171C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1171c8;
        }
    }
    ctx->pc = 0x117218u;
label_117218:
    // 0x117218: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x117218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11721c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11721Cu;
    {
        const bool branch_taken_0x11721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11721Cu;
        // 0x117220: 0x2a420008  slti        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11721c) {
            ctx->pc = 0x117238u;
            goto label_117238;
        }
    }
    ctx->pc = 0x117224u;
    // 0x117224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117228: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x117228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11722c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11722Cu;
    {
        const bool branch_taken_0x11722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11722Cu;
        // 0x117230: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11722c) {
            ctx->pc = 0x1171B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1171b8;
        }
    }
    ctx->pc = 0x117234u;
    // 0x117234: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x117234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_117238:
    // 0x117238: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x117238u;
    {
        const bool branch_taken_0x117238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117238u;
        // 0x11723c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117238) {
            ctx->pc = 0x1172BCu;
            goto label_1172bc;
        }
    }
    ctx->pc = 0x117240u;
    // 0x117240: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117248: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x11724c: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x11724cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x117250: 0x24501c70  addiu       $s0, $v0, 0x1C70
    ctx->pc = 0x117250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7280));
    // 0x117254: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x117254u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x117258: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x117258u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x11725c: 0x0  nop
    ctx->pc = 0x11725cu;
    // NOP
label_117260:
    // 0x117260: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x117260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x117264: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117264u;
    {
        const bool branch_taken_0x117264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117264u;
        // 0x117268: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117264) {
            ctx->pc = 0x1172B0u;
            goto label_1172b0;
        }
    }
    ctx->pc = 0x11726Cu;
    // 0x11726c: 0x2e420011  sltiu       $v0, $s2, 0x11
    ctx->pc = 0x11726cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x117270: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x117270u;
    {
        const bool branch_taken_0x117270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117270) {
            ctx->pc = 0x117274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117270u;
            // 0x117274: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117298u;
            goto label_117298;
        }
    }
    ctx->pc = 0x117278u;
    // 0x117278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11727c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11727Cu;
    SET_GPR_U32(ctx, 31, 0x117284u);
    ctx->pc = 0x117280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11727Cu;
    // 0x117280: 0x268442d8  addiu       $a0, $s4, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11727Cu, 0x117284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117284u;
label_117284:
    // 0x117284: 0x2664c540  addiu       $a0, $s3, -0x3AC0
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952256));
    // 0x117288: 0x262542e8  addiu       $a1, $s1, 0x42E8
    ctx->pc = 0x117288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17128));
    // 0x11728c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11728Cu;
    SET_GPR_U32(ctx, 31, 0x117294u);
    ctx->pc = 0x117290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11728Cu;
    // 0x117290: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11728Cu, 0x117294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117294u;
label_117294:
    // 0x117294: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x117294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_117298:
    // 0x117298: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x117298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11729c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11729Cu;
    {
        const bool branch_taken_0x11729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11729Cu;
        // 0x1172a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11729c) {
            ctx->pc = 0x117260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117260;
        }
    }
    ctx->pc = 0x1172A4u;
    // 0x1172a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x1172BCu;
            goto label_1172bc;
        }
    }
    ctx->pc = 0x1172ACu;
    // 0x1172ac: 0x0  nop
    ctx->pc = 0x1172acu;
    // NOP
label_1172b0:
    // 0x1172b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1172b4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1172b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1172b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1172b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1172bc:
    // 0x1172bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1172bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1172c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1172c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1172c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1172c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1172c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1172c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1172cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1172ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1172d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1172d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1172d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1172d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1172d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1172d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1172dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1172dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1172e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1172E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172E0u;
        // 0x1172e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1172E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1172E8u;
}
