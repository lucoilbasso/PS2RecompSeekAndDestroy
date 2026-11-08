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

// Function: entry_0015c168
// Address: 0x15c168 - 0x15c220
void entry_0015c168_0x15c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c168_0x15c168");
#endif

    switch (ctx->pc) {
        case 0x15c19cu: goto label_15c19c;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1f8u: goto label_15c1f8;
        default: break;
    }

    ctx->pc = 0x15c168u;

label_15c168:
    // 0x15c168: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15c168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c16c:
    // 0x15c16c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15c170:
    // 0x15c170: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c174:
    // 0x15c174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c178:
    // 0x15c178: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15c17c:
    // 0x15c17c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x15c17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c180:
    // 0x15c180: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15c184:
    // 0x15c184: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15c188:
    // 0x15c188: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c18c:
    // 0x15c18c: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15c190:
    // 0x15c190: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c194:
    // 0x15c194: 0x60f809  jalr        $v1
label_15c198:
    if (ctx->pc == 0x15C198u) {
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C194u;
        // 0x15c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C19Cu;
        goto label_15c19c;
    }
    ctx->pc = 0x15C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C19Cu);
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C194u;
        // 0x15c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C194u, 0x15C19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C19Cu;
label_15c19c:
    // 0x15c19c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c1a0:
    // 0x15c1a0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15c1a4:
    // 0x15c1a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15c1a8:
    // 0x15c1a8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15c1ac:
    // 0x15c1ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c1b0:
    // 0x15c1b0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15c1b4:
    // 0x15c1b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c1b8:
    // 0x15c1b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1bc:
    // 0x15c1bc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15c1c0:
    // 0x15c1c0: 0x60f809  jalr        $v1
label_15c1c4:
    if (ctx->pc == 0x15C1C4u) {
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1C8u;
        goto label_15c1c8;
    }
    ctx->pc = 0x15C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1C8u);
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1C0u, 0x15C1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1C8u;
label_15c1c8:
    // 0x15c1c8: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c1cc:
    // 0x15c1cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c1d0:
    // 0x15c1d0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15c1d4:
    // 0x15c1d4: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15c1d8:
    // 0x15c1d8: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15c1dc:
    // 0x15c1dc: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15c1e0:
    // 0x15c1e0: 0x8fd20020  lw          $s2, 0x20($fp)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_15c1e4:
    // 0x15c1e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c1e8:
    // 0x15c1e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c1ec:
    // 0x15c1ec: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15c1f0:
    // 0x15c1f0: 0x60f809  jalr        $v1
label_15c1f4:
    if (ctx->pc == 0x15C1F4u) {
        ctx->pc = 0x15C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F0u;
        // 0x15c1f4: 0x8fd1002c  lw          $s1, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1F8u;
        goto label_15c1f8;
    }
    ctx->pc = 0x15C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1F8u);
        ctx->pc = 0x15C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F0u;
        // 0x15c1f4: 0x8fd1002c  lw          $s1, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1F0u, 0x15C1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1F8u;
label_15c1f8:
    // 0x15c1f8: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15c1fc:
    // 0x15c1fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15c200:
    // 0x15c200: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15c200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15c204:
    // 0x15c204: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15c204u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15c208:
    // 0x15c208: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15c208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15c20c:
    // 0x15c20c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_15c210:
    if (ctx->pc == 0x15C210u) {
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C214u;
        goto label_15c214;
    }
    ctx->pc = 0x15C20Cu;
    {
        const bool branch_taken_0x15c20c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c20c) {
            ctx->pc = 0x15C238u;
            return;
        }
    }
    ctx->pc = 0x15C214u;
label_15c214:
    // 0x15c214: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x15c214u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
label_15c218:
    // 0x15c218: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_15c21c:
    if (ctx->pc == 0x15C21Cu) {
        ctx->pc = 0x15C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C218u;
        // 0x15c21c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C220u;
        goto label_fallthrough_0x15c218;
    }
    ctx->pc = 0x15C218u;
    {
        const bool branch_taken_0x15c218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c218) {
            ctx->pc = 0x15C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C218u;
            // 0x15c21c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C220u;
            return;
        }
    }
label_fallthrough_0x15c218:
    ctx->pc = 0x15C220u;
}
