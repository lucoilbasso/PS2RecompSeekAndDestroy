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

// Function: entry_0015d890
// Address: 0x15d890 - 0x15d9e4
void entry_0015d890_0x15d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d890_0x15d890");
#endif

    switch (ctx->pc) {
        case 0x15d8d8u: goto label_15d8d8;
        case 0x15d908u: goto label_15d908;
        case 0x15d930u: goto label_15d930;
        case 0x15d974u: goto label_15d974;
        case 0x15d998u: goto label_15d998;
        default: break;
    }

    ctx->pc = 0x15d890u;

label_15d890:
    // 0x15d890: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d894:
    // 0x15d894: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15d894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d898:
    // 0x15d898: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15d89c:
    // 0x15d89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d8a0:
    // 0x15d8a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15d8a4:
    // 0x15d8a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15d8a8:
    // 0x15d8a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d8ac:
    // 0x15d8ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_15d8b0:
    // 0x15d8b0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15d8b4:
    // 0x15d8b4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15d8b8:
    // 0x15d8b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d8bc:
    // 0x15d8bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d8c0:
    // 0x15d8c0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_15d8c4:
    // 0x15d8c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x15d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_15d8c8:
    // 0x15d8c8: 0xae27012c  sw          $a3, 0x12C($s1)
    ctx->pc = 0x15d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 7));
label_15d8cc:
    // 0x15d8cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d8d0:
    // 0x15d8d0: 0x60f809  jalr        $v1
label_15d8d4:
    if (ctx->pc == 0x15D8D4u) {
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8D8u;
        goto label_15d8d8;
    }
    ctx->pc = 0x15D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D8D8u);
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8D0u, 0x15D8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D8D8u;
label_15d8d8:
    // 0x15d8d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d8dc:
    // 0x15d8dc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15d8e0:
    // 0x15d8e0: 0x2403fef8  addiu       $v1, $zero, -0x108
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967032));
label_15d8e4:
    // 0x15d8e4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15d8e8:
    // 0x15d8e8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15d8ec:
    // 0x15d8ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d8f0:
    // 0x15d8f0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d8f4:
    // 0x15d8f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d8f8:
    // 0x15d8f8: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15d8fc:
    // 0x15d8fc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15d900:
    // 0x15d900: 0x60f809  jalr        $v1
label_15d904:
    if (ctx->pc == 0x15D904u) {
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0x27de001c  addiu       $fp, $fp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D908u;
        goto label_15d908;
    }
    ctx->pc = 0x15D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D908u);
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0x27de001c  addiu       $fp, $fp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D900u, 0x15D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D908u;
label_15d908:
    // 0x15d908: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d90c:
    // 0x15d90c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d910:
    // 0x15d910: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15d914:
    // 0x15d914: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15d914u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15d918:
    // 0x15d918: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15d918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15d91c:
    // 0x15d91c: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15d920:
    // 0x15d920: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d924:
    // 0x15d924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d928:
    // 0x15d928: 0x60f809  jalr        $v1
label_15d92c:
    if (ctx->pc == 0x15D92Cu) {
        ctx->pc = 0x15D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D928u;
        // 0x15d92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D930u;
        goto label_15d930;
    }
    ctx->pc = 0x15D928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D930u);
        ctx->pc = 0x15D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D928u;
        // 0x15d92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D928u, 0x15D930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D930u;
label_15d930:
    // 0x15d930: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15d930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15d934:
    // 0x15d934: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_15d938:
    // 0x15d938: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15d938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15d93c:
    // 0x15d93c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d940:
    // 0x15d940: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15d940u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15d944:
    // 0x15d944: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x15d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d948:
    // 0x15d948: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15d94c:
    // 0x15d94c: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15d950:
    // 0x15d950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d954:
    // 0x15d954: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_15d958:
    // 0x15d958: 0xaea60028  sw          $a2, 0x28($s5)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 6));
label_15d95c:
    // 0x15d95c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d960:
    // 0x15d960: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d964:
    // 0x15d964: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15d964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15d968:
    // 0x15d968: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_15d96c:
    // 0x15d96c: 0x40f809  jalr        $v0
label_15d970:
    if (ctx->pc == 0x15D970u) {
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D96Cu;
        // 0x15d970: 0xaea0002c  sw          $zero, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D974u;
        goto label_15d974;
    }
    ctx->pc = 0x15D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D974u);
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D96Cu;
        // 0x15d970: 0xaea0002c  sw          $zero, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D96Cu, 0x15D974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D974u;
label_15d974:
    // 0x15d974: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x15d974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_15d978:
    // 0x15d978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d97c:
    // 0x15d97c: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x15d97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_15d980:
    // 0x15d980: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15d984:
    // 0x15d984: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15d988:
    // 0x15d988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d98c:
    // 0x15d98c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d990:
    // 0x15d990: 0x60f809  jalr        $v1
label_15d994:
    if (ctx->pc == 0x15D994u) {
        ctx->pc = 0x15D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D990u;
        // 0x15d994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D998u;
        goto label_15d998;
    }
    ctx->pc = 0x15D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D998u);
        ctx->pc = 0x15D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D990u;
        // 0x15d994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D990u, 0x15D998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D998u;
label_15d998:
    // 0x15d998: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d99c:
    // 0x15d99c: 0x483fef4  bgezl       $a0, . + 4 + (-0x10C << 2)
label_15d9a0:
    if (ctx->pc == 0x15D9A0u) {
        ctx->pc = 0x15D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D99Cu;
        // 0x15d9a0: 0x8ee30010  lw          $v1, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9A4u;
        goto label_15d9a4;
    }
    ctx->pc = 0x15D99Cu;
    {
        const bool branch_taken_0x15d99c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x15d99c) {
            ctx->pc = 0x15D9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D99Cu;
            // 0x15d9a0: 0x8ee30010  lw          $v1, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D570u;
            return;
        }
    }
    ctx->pc = 0x15D9A4u;
label_15d9a4:
    // 0x15d9a4: 0x96e20016  lhu         $v0, 0x16($s7)
    ctx->pc = 0x15d9a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
label_15d9a8:
    // 0x15d9a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d9ac:
    // 0x15d9ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x15d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_15d9b0:
    // 0x15d9b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15d9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15d9b4:
    // 0x15d9b4: 0xa6e20016  sh          $v0, 0x16($s7)
    ctx->pc = 0x15d9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 22), (uint16_t)GPR_U32(ctx, 2));
label_15d9b8:
    // 0x15d9b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15d9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d9bc:
    // 0x15d9bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15d9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15d9c0:
    // 0x15d9c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15d9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d9c4:
    // 0x15d9c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15d9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15d9c8:
    // 0x15d9c8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15d9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d9cc:
    // 0x15d9cc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15d9ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15d9d0:
    // 0x15d9d0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15d9d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15d9d4:
    // 0x15d9d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15d9d8:
    // 0x15d9d8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x15d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15d9dc:
    // 0x15d9dc: 0x3e00008  jr          $ra
label_15d9e0:
    if (ctx->pc == 0x15D9E0u) {
        ctx->pc = 0x15D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9DCu;
        // 0x15d9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9E4u;
        goto label_fallthrough_0x15d9dc;
    }
    ctx->pc = 0x15D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9DCu;
        // 0x15d9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d9dc:
    ctx->pc = 0x15D9E4u;
}
