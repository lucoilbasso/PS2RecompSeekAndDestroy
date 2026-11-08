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

// Function: WPolyInitLocal__FP6WcPolyii
// Address: 0x18f1b8 - 0x18f474
void WPolyInitLocal__FP6WcPolyii_0x18f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolyInitLocal__FP6WcPolyii_0x18f1b8");
#endif

    switch (ctx->pc) {
        case 0x18f2d8u: goto label_18f2d8;
        case 0x18f318u: goto label_18f318;
        case 0x18f354u: goto label_18f354;
        case 0x18f39cu: goto label_18f39c;
        case 0x18f3f0u: goto label_18f3f0;
        case 0x18f438u: goto label_18f438;
        default: break;
    }

    ctx->pc = 0x18f1b8u;

    // 0x18f1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f1bc: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x18f1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f1c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1c8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x18f1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x18f1cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18f1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f1d4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18f1d8: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x18f1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f1dc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18f1e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18f1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1e4: 0x90e3ee48  lbu         $v1, -0x11B8($a3)
    ctx->pc = 0x18f1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21EE48u));
    // 0x18f1e8: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x18f1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18f1ec: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x18f1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f1f0: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x18f1f4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x18f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x18f1f8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18f1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f200: 0xa5050008  sh          $a1, 0x8($t0)
    ctx->pc = 0x18f200u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x18f204: 0xa511000a  sh          $s1, 0xA($t0)
    ctx->pc = 0x18f204u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x18f208: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x18f208u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x18f20c: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x18f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x18f210: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x18f210u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x18f214: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F214u;
    {
        const bool branch_taken_0x18f214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F214u;
        // 0x18f218: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f214) {
            ctx->pc = 0x18F258u;
            goto label_18f258;
        }
    }
    ctx->pc = 0x18F21Cu;
    // 0x18f21c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x18f21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F220u;
    {
        const bool branch_taken_0x18f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F220u;
        // 0x18f224: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f220) {
            ctx->pc = 0x18F238u;
            goto label_18f238;
        }
    }
    ctx->pc = 0x18F228u;
    // 0x18f228: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18F228u;
    {
        const bool branch_taken_0x18f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f228) {
            ctx->pc = 0x18F22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F228u;
            // 0x18f22c: 0xfd000028  sd          $zero, 0x28($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F284u;
            goto label_18f284;
        }
    }
    ctx->pc = 0x18F230u;
    // 0x18f230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18F230u;
    {
        const bool branch_taken_0x18f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F230u;
        // 0x18f234: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f230) {
            ctx->pc = 0x18F288u;
            goto label_18f288;
        }
    }
    ctx->pc = 0x18F238u;
label_18f238:
    // 0x18f238: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F238u;
        // 0x18f23c: 0x2a240004  slti        $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F268u;
            goto label_18f268;
        }
    }
    ctx->pc = 0x18F240u;
    // 0x18f240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f244: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F244u;
        // 0x18f248: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F278u;
            goto label_18f278;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18F24Cu;
    {
        const bool branch_taken_0x18f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F24Cu;
        // 0x18f250: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f24c) {
            ctx->pc = 0x18F288u;
            goto label_18f288;
        }
    }
    ctx->pc = 0x18F254u;
    // 0x18f254: 0x0  nop
    ctx->pc = 0x18f254u;
    // NOP
label_18f258:
    // 0x18f258: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18f25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F260u;
    {
        const bool branch_taken_0x18f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F260u;
        // 0x18f264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f260) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F268u;
label_18f268:
    // 0x18f268: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f26c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18F26Cu;
    {
        const bool branch_taken_0x18f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F26Cu;
        // 0x18f270: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f26c) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F274u;
    // 0x18f274: 0x0  nop
    ctx->pc = 0x18f274u;
    // NOP
label_18f278:
    // 0x18f278: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18f27c:
    // 0x18f27c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18f27cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18f280: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f280u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
label_18f284:
    // 0x18f284: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x18f284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_18f288:
    // 0x18f288: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18f28c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F28Cu;
    {
        const bool branch_taken_0x18f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f28c) {
            ctx->pc = 0x18F290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F28Cu;
            // 0x18f290: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F2A8u;
            goto label_18f2a8;
        }
    }
    ctx->pc = 0x18F294u;
    // 0x18f294: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x18f294u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x18f298: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f2a0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x18f2a4: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x18f2a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_18f2a8:
    // 0x18f2a8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18f2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F2ACu;
    {
        const bool branch_taken_0x18f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2ACu;
        // 0x18f2b0: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2ac) {
            ctx->pc = 0x18F2C4u;
            goto label_18f2c4;
        }
    }
    ctx->pc = 0x18F2B4u;
    // 0x18f2b4: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x18f2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x18f2b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f2bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f2c0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
label_18f2c4:
    // 0x18f2c4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F2C4u;
    {
        const bool branch_taken_0x18f2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2C4u;
        // 0x18f2c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2c4) {
            ctx->pc = 0x18F2D0u;
            goto label_18f2d0;
        }
    }
    ctx->pc = 0x18F2CCu;
    // 0x18f2cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f2d0:
    // 0x18f2d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F2D0u;
    SET_GPR_U32(ctx, 31, 0x18F2D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F2D0u, 0x18F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2D8u;
label_18f2d8:
    // 0x18f2d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F2D8u;
    {
        const bool branch_taken_0x18f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2D8u;
        // 0x18f2dc: 0xae0201c8  sw          $v0, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2d8) {
            ctx->pc = 0x18F308u;
            goto label_18f308;
        }
    }
    ctx->pc = 0x18F2E0u;
    // 0x18f2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f2e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f2ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f2f4: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f2f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f2fc: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F2FCu;
    ctx->pc = 0x18F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2FCu;
    // 0x18f300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F304u;
    // 0x18f304: 0x0  nop
    ctx->pc = 0x18f304u;
    // NOP
label_18f308:
    // 0x18f308: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x18F308u;
    {
        const bool branch_taken_0x18f308 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F308u;
        // 0x18f30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f308) {
            ctx->pc = 0x18F334u;
            goto label_18f334;
        }
    }
    ctx->pc = 0x18F310u;
    // 0x18f310: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x18f314: 0x0  nop
    ctx->pc = 0x18f314u;
    // NOP
label_18f318:
    // 0x18f318: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18f31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f320: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x18f320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f324: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18f328: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18f32c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F32Cu;
    {
        const bool branch_taken_0x18f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f32c) {
            ctx->pc = 0x18F330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F32Cu;
            // 0x18f330: 0x8e0201c8  lw          $v0, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f318;
        }
    }
    ctx->pc = 0x18F334u;
label_18f334:
    // 0x18f334: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x18f338: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x18f33c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f340: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F340u;
    {
        const bool branch_taken_0x18f340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F340u;
        // 0x18f344: 0xae020168  sw          $v0, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f340) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F348u;
    // 0x18f348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f34c:
    // 0x18f34c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F34Cu;
    SET_GPR_U32(ctx, 31, 0x18F354u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F34Cu, 0x18F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F354u;
    {
        const bool branch_taken_0x18f354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F354u;
        // 0x18f358: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f354) {
            ctx->pc = 0x18F380u;
            goto label_18f380;
        }
    }
    ctx->pc = 0x18F35Cu;
    // 0x18f35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f364: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f370: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f374: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f378: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F378u;
    ctx->pc = 0x18F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F378u;
    // 0x18f37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F380u;
label_18f380:
    // 0x18f380: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x18f380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x18f384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f388: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F388u;
    {
        const bool branch_taken_0x18f388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F388u;
        // 0x18f38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f388) {
            ctx->pc = 0x18F394u;
            goto label_18f394;
        }
    }
    ctx->pc = 0x18F390u;
    // 0x18f390: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f394:
    // 0x18f394: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F394u;
    SET_GPR_U32(ctx, 31, 0x18F39Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F394u, 0x18F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F39Cu;
label_18f39c:
    // 0x18f39c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F39Cu;
    {
        const bool branch_taken_0x18f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F39Cu;
        // 0x18f3a0: 0xae0201d8  sw          $v0, 0x1D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f39c) {
            ctx->pc = 0x18F3C8u;
            goto label_18f3c8;
        }
    }
    ctx->pc = 0x18F3A4u;
    // 0x18f3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f3ac: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f3b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f3b8: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f3bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f3c0: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F3C0u;
    ctx->pc = 0x18F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3C0u;
    // 0x18f3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F3C8u;
label_18f3c8:
    // 0x18f3c8: 0x96020158  lhu         $v0, 0x158($s0)
    ctx->pc = 0x18f3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x18f3cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18f3d0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18F3D0u;
    {
        const bool branch_taken_0x18f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f3d0) {
            ctx->pc = 0x18F3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F3D0u;
            // 0x18f3d4: 0x26020154  addiu       $v0, $s0, 0x154 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F45Cu;
            goto label_18f45c;
        }
    }
    ctx->pc = 0x18F3D8u;
    // 0x18f3d8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x18f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18f3dc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F3DCu;
    {
        const bool branch_taken_0x18f3dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3DCu;
        // 0x18f3e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3dc) {
            ctx->pc = 0x18F3E8u;
            goto label_18f3e8;
        }
    }
    ctx->pc = 0x18F3E4u;
    // 0x18f3e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f3e8:
    // 0x18f3e8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F3E8u;
    SET_GPR_U32(ctx, 31, 0x18F3F0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F3E8u, 0x18F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3F0u;
label_18f3f0:
    // 0x18f3f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F3F0u;
    {
        const bool branch_taken_0x18f3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3F0u;
        // 0x18f3f4: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3f0) {
            ctx->pc = 0x18F420u;
            goto label_18f420;
        }
    }
    ctx->pc = 0x18F3F8u;
    // 0x18f3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f400: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f40c: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f410: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f414: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F414u;
    ctx->pc = 0x18F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F414u;
    // 0x18f418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F41Cu;
    // 0x18f41c: 0x0  nop
    ctx->pc = 0x18f41cu;
    // NOP
label_18f420:
    // 0x18f420: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F420u;
        // 0x18f424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F458u;
            goto label_18f458;
        }
    }
    ctx->pc = 0x18F428u;
    // 0x18f428: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x18f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x18f42c: 0x2446d630  addiu       $a2, $v0, -0x29D0
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x18f430: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x18f434: 0x0  nop
    ctx->pc = 0x18f434u;
    // NOP
label_18f438:
    // 0x18f438: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18f438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18f43c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x18f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f444: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18f444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x18f448: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18f44c: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x18f44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18f450: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18F450u;
    {
        const bool branch_taken_0x18f450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f450) {
            ctx->pc = 0x18F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F450u;
            // 0x18f454: 0x8e0201cc  lw          $v0, 0x1CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f438;
        }
    }
    ctx->pc = 0x18F458u;
label_18f458:
    // 0x18f458: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_18f45c:
    // 0x18f45c: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x18f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x18f460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F46Cu;
        // 0x18f470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F474u;
}
