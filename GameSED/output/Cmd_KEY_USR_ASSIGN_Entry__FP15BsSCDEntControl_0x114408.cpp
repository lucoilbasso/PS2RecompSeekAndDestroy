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

// Function: Cmd_KEY_USR_ASSIGN_Entry__FP15BsSCDEntControl
// Address: 0x114408 - 0x1144e0
void Cmd_KEY_USR_ASSIGN_Entry__FP15BsSCDEntControl_0x114408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_USR_ASSIGN_Entry__FP15BsSCDEntControl_0x114408");
#endif

    switch (ctx->pc) {
        case 0x114424u: goto label_114424;
        case 0x114430u: goto label_114430;
        case 0x114450u: goto label_114450;
        case 0x114494u: goto label_114494;
        default: break;
    }

    ctx->pc = 0x114408u;

    // 0x114408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11440c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x114418: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x114418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11441c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11441Cu;
    SET_GPR_U32(ctx, 31, 0x114424u);
    ctx->pc = 0x114420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11441Cu;
    // 0x114420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11441Cu, 0x114424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114424u;
label_114424:
    // 0x114424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114428: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114428u;
    SET_GPR_U32(ctx, 31, 0x114430u);
    ctx->pc = 0x11442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114428u;
    // 0x11442c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114428u, 0x114430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114430u;
label_114430:
    // 0x114430: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x114434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114438: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x114438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11443c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114440: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114440u;
    {
        const bool branch_taken_0x114440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x114440) {
            ctx->pc = 0x114444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114440u;
            // 0x114444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114454u;
            goto label_114454;
        }
    }
    ctx->pc = 0x114448u;
    // 0x114448: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114448u;
    SET_GPR_U32(ctx, 31, 0x114450u);
    ctx->pc = 0x11444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114448u;
    // 0x11444c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114448u, 0x114450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114450u;
label_114450:
    // 0x114450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114454:
    // 0x114454: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x114454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x114458: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x114458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11445c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x11445cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x114460: 0x9464c058  lhu         $a0, -0x3FA8($v1)
    ctx->pc = 0x114460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294951000)));
    // 0x114464: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x114464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114468: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x114468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x11446c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x114470: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x114474: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x114478: 0x94c6d172  lhu         $a2, -0x2E8E($a2)
    ctx->pc = 0x114478u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294955378)));
    // 0x11447c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11447Cu;
    {
        const bool branch_taken_0x11447c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x114480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11447Cu;
        // 0x114480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11447c) {
            ctx->pc = 0x114490u;
            goto label_114490;
        }
    }
    ctx->pc = 0x114484u;
    // 0x114484: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114484u;
        // 0x114488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114484) {
            ctx->pc = 0x1144C4u;
            goto label_1144c4;
        }
    }
    ctx->pc = 0x11448Cu;
    // 0x11448c: 0x0  nop
    ctx->pc = 0x11448cu;
    // NOP
label_114490:
    // 0x114490: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_114494:
    // 0x114494: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x114494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x114498: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x114498u;
    {
        const bool branch_taken_0x114498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114498u;
        // 0x11449c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114498) {
            ctx->pc = 0x1144C4u;
            goto label_1144c4;
        }
    }
    ctx->pc = 0x1144A0u;
    // 0x1144a0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1144a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1144a8: 0x9442c058  lhu         $v0, -0x3FA8($v0)
    ctx->pc = 0x1144a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951000)));
    // 0x1144ac: 0x0  nop
    ctx->pc = 0x1144acu;
    // NOP
    // 0x1144b0: 0x0  nop
    ctx->pc = 0x1144b0u;
    // NOP
    // 0x1144b4: 0x0  nop
    ctx->pc = 0x1144b4u;
    // NOP
    // 0x1144b8: 0x5446fff6  bnel        $v0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1144B8u;
    {
        const bool branch_taken_0x1144b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1144b8) {
            ctx->pc = 0x1144BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1144B8u;
            // 0x1144bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114494;
        }
    }
    ctx->pc = 0x1144C0u;
    // 0x1144c0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1144c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1144c4:
    // 0x1144c4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x1144c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x1144c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1144c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1144cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1144d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1144d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1144d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1144d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1144d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1144D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144D8u;
        // 0x1144dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144E0u;
}
