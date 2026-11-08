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

// Function: entry_00173818
// Address: 0x173818 - 0x1738d8
void entry_00173818_0x173818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173818_0x173818");
#endif

    switch (ctx->pc) {
        case 0x173860u: goto label_173860;
        case 0x173878u: goto label_173878;
        case 0x173888u: goto label_173888;
        case 0x173894u: goto label_173894;
        default: break;
    }

    ctx->pc = 0x173818u;

label_173818:
    // 0x173818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17381c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x173820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173824: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x173824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173828: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17382c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173830: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173834: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173838: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17383c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17383cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173840: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173844: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x173844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173848: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17384c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173850: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x173854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173858: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173858u;
    SET_GPR_U32(ctx, 31, 0x173860u);
    ctx->pc = 0x17385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173858u;
    // 0x17385c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173858u, 0x173860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173860u;
label_173860:
    // 0x173860: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173864: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x173864u;
    {
        const bool branch_taken_0x173864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173864) {
            ctx->pc = 0x173868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173864u;
            // 0x173868: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173818;
        }
    }
    ctx->pc = 0x17386Cu;
    // 0x17386c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173870: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173870u;
    SET_GPR_U32(ctx, 31, 0x173878u);
    ctx->pc = 0x173874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173870u;
    // 0x173874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173870u, 0x173878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173878u;
label_173878:
    // 0x173878: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17387c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173880: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173880u;
    SET_GPR_U32(ctx, 31, 0x173888u);
    ctx->pc = 0x173884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173880u;
    // 0x173884: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173880u, 0x173888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173888u;
label_173888:
    // 0x173888: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x173888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x17388c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17388Cu;
    SET_GPR_U32(ctx, 31, 0x173894u);
    ctx->pc = 0x173890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17388Cu;
    // 0x173890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17388Cu, 0x173894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173894u;
label_173894:
    // 0x173894: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x173894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173898: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17389c: 0x8fb10084  lw          $s1, 0x84($sp)
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1738a0: 0x8fb00094  lw          $s0, 0x94($sp)
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1738a4: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x1738A4u;
    {
        const bool branch_taken_0x1738a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738A4u;
        // 0x1738a8: 0xafa50088  sw          $a1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738a4) {
            ctx->pc = 0x173160u;
            return;
        }
    }
    ctx->pc = 0x1738ACu;
    // 0x1738ac: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1738b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1738b4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1738b8: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1738b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1738bc: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x1738bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1738c0: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1738c4: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x1738c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x1738c8: 0x1440fe19  bnez        $v0, . + 4 + (-0x1E7 << 2)
    ctx->pc = 0x1738C8u;
    {
        const bool branch_taken_0x1738c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738C8u;
        // 0x1738cc: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738c8) {
            ctx->pc = 0x173130u;
            return;
        }
    }
    ctx->pc = 0x1738D0u;
    // 0x1738d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1738D0u;
    {
        const bool branch_taken_0x1738d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D0u;
        // 0x1738d4: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738d0) {
            ctx->pc = 0x1738E8u;
            return;
        }
    }
    ctx->pc = 0x1738D8u;
}
