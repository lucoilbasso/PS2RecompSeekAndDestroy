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

// Function: BSCDEntInterpMain__FP15BsSCDEntControli
// Address: 0x1a5898 - 0x1a59ac
void BSCDEntInterpMain__FP15BsSCDEntControli_0x1a5898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntInterpMain__FP15BsSCDEntControli_0x1a5898");
#endif

    switch (ctx->pc) {
        case 0x1a5898u: goto label_1a5898;
        case 0x1a589cu: goto label_1a589c;
        case 0x1a58a0u: goto label_1a58a0;
        case 0x1a58a4u: goto label_1a58a4;
        case 0x1a58a8u: goto label_1a58a8;
        case 0x1a58acu: goto label_1a58ac;
        case 0x1a58b0u: goto label_1a58b0;
        case 0x1a58b4u: goto label_1a58b4;
        case 0x1a58b8u: goto label_1a58b8;
        case 0x1a58bcu: goto label_1a58bc;
        case 0x1a58c0u: goto label_1a58c0;
        case 0x1a58c4u: goto label_1a58c4;
        case 0x1a58c8u: goto label_1a58c8;
        case 0x1a58ccu: goto label_1a58cc;
        case 0x1a58d0u: goto label_1a58d0;
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58d8u: goto label_1a58d8;
        case 0x1a58dcu: goto label_1a58dc;
        case 0x1a58e0u: goto label_1a58e0;
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58ecu: goto label_1a58ec;
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a58f4u: goto label_1a58f4;
        case 0x1a58f8u: goto label_1a58f8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5900u: goto label_1a5900;
        case 0x1a5904u: goto label_1a5904;
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        default: break;
    }

    ctx->pc = 0x1a5898u;

label_1a5898:
    // 0x1a5898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a589c:
    // 0x1a589c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a58a0:
    // 0x1a58a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a58a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a58a4:
    // 0x1a58a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a58a8:
    // 0x1a58a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a58a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a58ac:
    // 0x1a58ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a58b0:
    // 0x1a58b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a58b4:
    // 0x1a58b4: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a58b8:
    // 0x1a58b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a58bc:
    // 0x1a58bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a58bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a58c0:
    // 0x1a58c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a58c4:
    if (ctx->pc == 0x1A58C4u) {
        ctx->pc = 0x1A58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C0u;
        // 0x1a58c4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58C8u;
        goto label_1a58c8;
    }
    ctx->pc = 0x1A58C0u;
    {
        const bool branch_taken_0x1a58c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C0u;
        // 0x1a58c4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c0) {
            ctx->pc = 0x1A58D8u;
            goto label_1a58d8;
        }
    }
    ctx->pc = 0x1A58C8u;
label_1a58c8:
    // 0x1a58c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a58cc:
    // 0x1a58cc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a58ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a58d0:
    // 0x1a58d0: 0xc068186  jal         func_1A0618
label_1a58d4:
    if (ctx->pc == 0x1A58D4u) {
        ctx->pc = 0x1A58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58D0u;
        // 0x1a58d4: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58D8u;
        goto label_1a58d8;
    }
    ctx->pc = 0x1A58D0u;
    SET_GPR_U32(ctx, 31, 0x1A58D8u);
    ctx->pc = 0x1A58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58D0u;
    // 0x1a58d4: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A58D0u, 0x1A58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58D8u;
label_1a58d8:
    // 0x1a58d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a58dc:
    // 0x1a58dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a58e0:
    // 0x1a58e0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1a58e4:
    // 0x1a58e4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1a58e8:
    // 0x1a58e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a58ec:
    // 0x1a58ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1a58f0:
    if (ctx->pc == 0x1A58F0u) {
        ctx->pc = 0x1A58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ECu;
        // 0x1a58f0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58F4u;
        goto label_1a58f4;
    }
    ctx->pc = 0x1A58ECu;
    {
        const bool branch_taken_0x1a58ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ECu;
        // 0x1a58f0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58ec) {
            ctx->pc = 0x1A5994u;
            goto label_1a5994;
        }
    }
    ctx->pc = 0x1A58F4u;
label_1a58f4:
    // 0x1a58f4: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1a58f8:
    // 0x1a58f8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_1a58fc:
    // 0x1a58fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5900:
    // 0x1a5900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5904:
    // 0x1a5904: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a5908:
    // 0x1a5908: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a5908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1a590c:
    // 0x1a590c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a5910:
    // 0x1a5910: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a5914:
    // 0x1a5914: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1a5914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1a5918:
    // 0x1a5918: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a5918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1a591c:
    // 0x1a591c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5920:
    // 0x1a5920: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a5920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a5924:
    // 0x1a5924: 0x1072000a  beq         $v1, $s2, . + 4 + (0xA << 2)
label_1a5928:
    if (ctx->pc == 0x1A5928u) {
        ctx->pc = 0x1A5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5924u;
        // 0x1a5928: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A592Cu;
        goto label_1a592c;
    }
    ctx->pc = 0x1A5924u;
    {
        const bool branch_taken_0x1a5924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5924u;
        // 0x1a5928: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5924) {
            ctx->pc = 0x1A5950u;
            goto label_1a5950;
        }
    }
    ctx->pc = 0x1A592Cu;
label_1a592c:
    // 0x1a592c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1a5930:
    // 0x1a5930: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a5934:
    // 0x1a5934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5938:
    // 0x1a5938: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a5938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a593c:
    // 0x1a593c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5940:
    // 0x1a5940: 0x0  nop
    ctx->pc = 0x1a5940u;
    // NOP
label_1a5944:
    // 0x1a5944: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
label_1a5948:
    if (ctx->pc == 0x1A5948u) {
        ctx->pc = 0x1A5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5944u;
        // 0x1a5948: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A594Cu;
        goto label_1a594c;
    }
    ctx->pc = 0x1A5944u;
    {
        const bool branch_taken_0x1a5944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5944u;
        // 0x1a5948: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5944) {
            ctx->pc = 0x1A5930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5930;
        }
    }
    ctx->pc = 0x1A594Cu;
label_1a594c:
    // 0x1a594c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1a594cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1a5950:
    // 0x1a5950: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5954:
    // 0x1a5954: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1a5954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1a5958:
    // 0x1a5958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a595c:
    // 0x1a595c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5960:
    // 0x1a5960: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5964:
    // 0x1a5964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5968:
    // 0x1a5968: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x1a5968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
label_1a596c:
    // 0x1a596c: 0xa0f809  jalr        $a1
label_1a5970:
    if (ctx->pc == 0x1A5970u) {
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5974u;
        goto label_1a5974;
    }
    ctx->pc = 0x1A596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A5974u);
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A596Cu, 0x1A5974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5974u;
label_1a5974:
    // 0x1a5974: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5978:
    // 0x1a5978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a597c:
    // 0x1a597c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a5980:
    if (ctx->pc == 0x1A5980u) {
        ctx->pc = 0x1A5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A597Cu;
        // 0x1a5980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5984u;
        goto label_1a5984;
    }
    ctx->pc = 0x1A597Cu;
    {
        const bool branch_taken_0x1a597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a597c) {
            ctx->pc = 0x1A5980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A597Cu;
            // 0x1a5980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5998u;
            goto label_1a5998;
        }
    }
    ctx->pc = 0x1A5984u;
label_1a5984:
    // 0x1a5984: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5988:
    // 0x1a5988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a598c:
    // 0x1a598c: 0x5460ffdc  bnel        $v1, $zero, . + 4 + (-0x24 << 2)
label_1a5990:
    if (ctx->pc == 0x1A5990u) {
        ctx->pc = 0x1A5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A598Cu;
        // 0x1a5990: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5994u;
        goto label_1a5994;
    }
    ctx->pc = 0x1A598Cu;
    {
        const bool branch_taken_0x1a598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a598c) {
            ctx->pc = 0x1A5990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A598Cu;
            // 0x1a5990: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5900;
        }
    }
    ctx->pc = 0x1A5994u;
label_1a5994:
    // 0x1a5994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5998:
    // 0x1a5998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a599c:
    // 0x1a599c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a599cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a59a0:
    // 0x1a59a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a59a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a59a4:
    // 0x1a59a4: 0x3e00008  jr          $ra
label_1a59a8:
    if (ctx->pc == 0x1A59A8u) {
        ctx->pc = 0x1A59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A4u;
        // 0x1a59a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59ACu;
        goto label_fallthrough_0x1a59a4;
    }
    ctx->pc = 0x1A59A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A4u;
        // 0x1a59a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A59A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a59a4:
    ctx->pc = 0x1A59ACu;
}
