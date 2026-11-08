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

// Function: entry_0015b344
// Address: 0x15b344 - 0x15b3fc
void entry_0015b344_0x15b344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b344_0x15b344");
#endif

    switch (ctx->pc) {
        case 0x15b374u: goto label_15b374;
        case 0x15b39cu: goto label_15b39c;
        case 0x15b3c4u: goto label_15b3c4;
        default: break;
    }

    ctx->pc = 0x15b344u;

label_15b344:
    // 0x15b344: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b348:
    // 0x15b348: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b34c:
    // 0x15b34c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b350:
    // 0x15b350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b354:
    // 0x15b354: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b358:
    // 0x15b358: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15b35c:
    // 0x15b35c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b360:
    // 0x15b360: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b364:
    // 0x15b364: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15b364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15b368:
    // 0x15b368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b36c:
    // 0x15b36c: 0x60f809  jalr        $v1
label_15b370:
    if (ctx->pc == 0x15B370u) {
        ctx->pc = 0x15B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B36Cu;
        // 0x15b370: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B374u;
        goto label_15b374;
    }
    ctx->pc = 0x15B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B374u);
        ctx->pc = 0x15B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B36Cu;
        // 0x15b370: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B36Cu, 0x15B374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B374u;
label_15b374:
    // 0x15b374: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b378:
    // 0x15b378: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b37c:
    // 0x15b37c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15b380:
    // 0x15b380: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b384:
    // 0x15b384: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b388:
    // 0x15b388: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_15b38c:
    // 0x15b38c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b390:
    // 0x15b390: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15b394:
    // 0x15b394: 0x60f809  jalr        $v1
label_15b398:
    if (ctx->pc == 0x15B398u) {
        ctx->pc = 0x15B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B394u;
        // 0x15b398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B39Cu;
        goto label_15b39c;
    }
    ctx->pc = 0x15B394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B39Cu);
        ctx->pc = 0x15B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B394u;
        // 0x15b398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B394u, 0x15B39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B39Cu;
label_15b39c:
    // 0x15b39c: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b3a0:
    // 0x15b3a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b3a4:
    // 0x15b3a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15b3a8:
    // 0x15b3a8: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15b3ac:
    // 0x15b3ac: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15b3b0:
    // 0x15b3b0: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15b3b4:
    // 0x15b3b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b3b8:
    // 0x15b3b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b3bc:
    // 0x15b3bc: 0x60f809  jalr        $v1
label_15b3c0:
    if (ctx->pc == 0x15B3C0u) {
        ctx->pc = 0x15B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3BCu;
        // 0x15b3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3C4u;
        goto label_15b3c4;
    }
    ctx->pc = 0x15B3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B3C4u);
        ctx->pc = 0x15B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3BCu;
        // 0x15b3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B3BCu, 0x15B3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B3C4u;
label_15b3c4:
    // 0x15b3c4: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15b3c8:
    // 0x15b3c8: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_15b3cc:
    // 0x15b3cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15b3d0:
    // 0x15b3d0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15b3d4:
    // 0x15b3d4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15b3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15b3d8:
    // 0x15b3d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b3dc:
    // 0x15b3dc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x15b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_15b3e0:
    // 0x15b3e0: 0xaea60018  sw          $a2, 0x18($s5)
    ctx->pc = 0x15b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 6));
label_15b3e4:
    // 0x15b3e4: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15b3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
label_15b3e8:
    // 0x15b3e8: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x15b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_15b3ec:
    // 0x15b3ec: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15b3f0:
    // 0x15b3f0: 0xaea50028  sw          $a1, 0x28($s5)
    ctx->pc = 0x15b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 5));
label_15b3f4:
    // 0x15b3f4: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15b3f8:
    // 0x15b3f8: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x15b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x15b3fcu;
}
