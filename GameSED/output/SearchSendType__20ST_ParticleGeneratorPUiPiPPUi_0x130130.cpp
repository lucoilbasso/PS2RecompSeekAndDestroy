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

// Function: SearchSendType__20ST_ParticleGeneratorPUiPiPPUi
// Address: 0x130130 - 0x1302f4
void SearchSendType__20ST_ParticleGeneratorPUiPiPPUi_0x130130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSendType__20ST_ParticleGeneratorPUiPiPPUi_0x130130");
#endif

    switch (ctx->pc) {
        case 0x130158u: goto label_130158;
        case 0x130178u: goto label_130178;
        case 0x130190u: goto label_130190;
        case 0x1301a8u: goto label_1301a8;
        case 0x1301c0u: goto label_1301c0;
        case 0x1301d8u: goto label_1301d8;
        case 0x1301f0u: goto label_1301f0;
        case 0x130208u: goto label_130208;
        case 0x130220u: goto label_130220;
        case 0x130238u: goto label_130238;
        case 0x130250u: goto label_130250;
        case 0x130268u: goto label_130268;
        case 0x130280u: goto label_130280;
        case 0x130298u: goto label_130298;
        case 0x1302b0u: goto label_1302b0;
        case 0x1302c8u: goto label_1302c8;
        default: break;
    }

    ctx->pc = 0x130130u;

    // 0x130130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130138: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x130138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13013c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x130140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130148: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x130148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13014c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x130150: 0xc04844a  jal         func_121128
    ctx->pc = 0x130150u;
    SET_GPR_U32(ctx, 31, 0x130158u);
    ctx->pc = 0x130154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130150u;
    // 0x130154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130150u, 0x130158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130158u;
label_130158:
    // 0x130158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13015c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13015Cu;
    {
        const bool branch_taken_0x13015c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13015Cu;
        // 0x130160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13015c) {
            ctx->pc = 0x130170u;
            goto label_130170;
        }
    }
    ctx->pc = 0x130164u;
    // 0x130164: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x130164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x130168: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x130168u;
    {
        const bool branch_taken_0x130168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130168u;
        // 0x13016c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130168) {
            ctx->pc = 0x1302DCu;
            goto label_1302dc;
        }
    }
    ctx->pc = 0x130170u;
label_130170:
    // 0x130170: 0xc04844a  jal         func_121128
    ctx->pc = 0x130170u;
    SET_GPR_U32(ctx, 31, 0x130178u);
    ctx->pc = 0x130174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130170u;
    // 0x130174: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130170u, 0x130178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130178u;
label_130178:
    // 0x130178: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130178u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13017c: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x13017Cu;
    {
        const bool branch_taken_0x13017c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13017Cu;
        // 0x130180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13017c) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x130184u;
    // 0x130184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130188: 0xc04844a  jal         func_121128
    ctx->pc = 0x130188u;
    SET_GPR_U32(ctx, 31, 0x130190u);
    ctx->pc = 0x13018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130188u;
    // 0x13018c: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130188u, 0x130190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130190u;
label_130190:
    // 0x130190: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130194: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x130194u;
    {
        const bool branch_taken_0x130194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130194u;
        // 0x130198: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130194) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x13019Cu;
    // 0x13019c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301a0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1301A0u;
    SET_GPR_U32(ctx, 31, 0x1301A8u);
    ctx->pc = 0x1301A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301A0u;
    // 0x1301a4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1301A0u, 0x1301A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301A8u;
label_1301a8:
    // 0x1301a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1301a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301ac: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301ACu;
        // 0x1301b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1301B4u;
    // 0x1301b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1301b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301b8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1301B8u;
    SET_GPR_U32(ctx, 31, 0x1301C0u);
    ctx->pc = 0x1301BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301B8u;
    // 0x1301bc: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1301B8u, 0x1301C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301C0u;
label_1301c0:
    // 0x1301c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1301c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301c4: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1301C4u;
    {
        const bool branch_taken_0x1301c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1301C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301C4u;
        // 0x1301c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301c4) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1301CCu;
    // 0x1301cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1301ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301d0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1301D0u;
    SET_GPR_U32(ctx, 31, 0x1301D8u);
    ctx->pc = 0x1301D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301D0u;
    // 0x1301d4: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1301D0u, 0x1301D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D8u;
label_1301d8:
    // 0x1301d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1301d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301dc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1301DCu;
    {
        const bool branch_taken_0x1301dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1301E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301DCu;
        // 0x1301e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301dc) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1301E4u;
    // 0x1301e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1301e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301e8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1301E8u;
    SET_GPR_U32(ctx, 31, 0x1301F0u);
    ctx->pc = 0x1301ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301E8u;
    // 0x1301ec: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1301E8u, 0x1301F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301F0u;
label_1301f0:
    // 0x1301f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1301f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301f4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1301F4u;
    {
        const bool branch_taken_0x1301f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1301F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301F4u;
        // 0x1301f8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301f4) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1301FCu;
    // 0x1301fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1301fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130200: 0xc04844a  jal         func_121128
    ctx->pc = 0x130200u;
    SET_GPR_U32(ctx, 31, 0x130208u);
    ctx->pc = 0x130204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130200u;
    // 0x130204: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130200u, 0x130208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130208u;
label_130208:
    // 0x130208: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13020c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x13020Cu;
    {
        const bool branch_taken_0x13020c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13020Cu;
        // 0x130210: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13020c) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x130214u;
    // 0x130214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130218: 0xc04844a  jal         func_121128
    ctx->pc = 0x130218u;
    SET_GPR_U32(ctx, 31, 0x130220u);
    ctx->pc = 0x13021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130218u;
    // 0x13021c: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130218u, 0x130220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130224: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x130224u;
    {
        const bool branch_taken_0x130224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130224u;
        // 0x130228: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130224) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x13022Cu;
    // 0x13022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130230: 0xc04844a  jal         func_121128
    ctx->pc = 0x130230u;
    SET_GPR_U32(ctx, 31, 0x130238u);
    ctx->pc = 0x130234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130230u;
    // 0x130234: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130230u, 0x130238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130238u;
label_130238:
    // 0x130238: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13023c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13023Cu;
    {
        const bool branch_taken_0x13023c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13023Cu;
        // 0x130240: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13023c) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x130244u;
    // 0x130244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130248: 0xc04844a  jal         func_121128
    ctx->pc = 0x130248u;
    SET_GPR_U32(ctx, 31, 0x130250u);
    ctx->pc = 0x13024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130248u;
    // 0x13024c: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130248u, 0x130250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130250u;
label_130250:
    // 0x130250: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130254: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x130254u;
    {
        const bool branch_taken_0x130254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130254u;
        // 0x130258: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130254) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x13025Cu;
    // 0x13025c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130260: 0xc04844a  jal         func_121128
    ctx->pc = 0x130260u;
    SET_GPR_U32(ctx, 31, 0x130268u);
    ctx->pc = 0x130264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130260u;
    // 0x130264: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130260u, 0x130268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130268u;
label_130268:
    // 0x130268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13026c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13026Cu;
    {
        const bool branch_taken_0x13026c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13026Cu;
        // 0x130270: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13026c) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x130274u;
    // 0x130274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130278: 0xc04844a  jal         func_121128
    ctx->pc = 0x130278u;
    SET_GPR_U32(ctx, 31, 0x130280u);
    ctx->pc = 0x13027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130278u;
    // 0x13027c: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130278u, 0x130280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130280u;
label_130280:
    // 0x130280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130284: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x130284u;
    {
        const bool branch_taken_0x130284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130284u;
        // 0x130288: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130284) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x13028Cu;
    // 0x13028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130290: 0xc04844a  jal         func_121128
    ctx->pc = 0x130290u;
    SET_GPR_U32(ctx, 31, 0x130298u);
    ctx->pc = 0x130294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130290u;
    // 0x130294: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130290u, 0x130298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130298u;
label_130298:
    // 0x130298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13029c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13029Cu;
    {
        const bool branch_taken_0x13029c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1302A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13029Cu;
        // 0x1302a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13029c) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1302A4u;
    // 0x1302a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1302a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302a8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1302A8u;
    SET_GPR_U32(ctx, 31, 0x1302B0u);
    ctx->pc = 0x1302ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302A8u;
    // 0x1302ac: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1302A8u, 0x1302B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302B0u;
label_1302b0:
    // 0x1302b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1302B4u;
    {
        const bool branch_taken_0x1302b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1302B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302B4u;
        // 0x1302b8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302b4) {
            ctx->pc = 0x1302D4u;
            goto label_1302d4;
        }
    }
    ctx->pc = 0x1302BCu;
    // 0x1302bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1302bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1302C0u;
    SET_GPR_U32(ctx, 31, 0x1302C8u);
    ctx->pc = 0x1302C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302C0u;
    // 0x1302c4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1302C0u, 0x1302C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302C8u;
label_1302c8:
    // 0x1302c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1302c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1302CCu;
    {
        const bool branch_taken_0x1302cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302CCu;
        // 0x1302d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302cc) {
            ctx->pc = 0x1302DCu;
            goto label_1302dc;
        }
    }
    ctx->pc = 0x1302D4u;
label_1302d4:
    // 0x1302d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1302d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1302d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1302d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1302dc:
    // 0x1302dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1302dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1302e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1302e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1302e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1302e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1302e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1302ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1302ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302ECu;
        // 0x1302f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1302ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1302F4u;
}
