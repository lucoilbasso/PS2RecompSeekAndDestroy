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

// Function: _ActorArrayInqPtr__FP5BcObji
// Address: 0x132a18 - 0x132b4c
void ps2__ActorArrayInqPtr__FP5BcObji_0x132a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ActorArrayInqPtr__FP5BcObji_0x132a18");
#endif

    switch (ctx->pc) {
        case 0x132af8u: goto label_132af8;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b20u: goto label_132b20;
        case 0x132b30u: goto label_132b30;
        default: break;
    }

    ctx->pc = 0x132a18u;

    // 0x132a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132a20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132a28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132a30: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x132A30u;
    {
        const bool branch_taken_0x132a30 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x132A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A30u;
        // 0x132a34: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a30) {
            ctx->pc = 0x132A60u;
            goto label_132a60;
        }
    }
    ctx->pc = 0x132A38u;
    // 0x132a38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x132a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x132a3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x132A3Cu;
    {
        const bool branch_taken_0x132a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A3Cu;
        // 0x132a40: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a3c) {
            ctx->pc = 0x132AE8u;
            goto label_132ae8;
        }
    }
    ctx->pc = 0x132A44u;
    // 0x132a44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x132a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x132a48: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x132a4c: 0x2421c060  addiu       $at, $at, -0x3FA0
    ctx->pc = 0x132a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951008));
    // 0x132a50: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x132a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x132a54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x132A54u;
    {
        const bool branch_taken_0x132a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A54u;
        // 0x132a58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a54) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132A5Cu;
    // 0x132a5c: 0x0  nop
    ctx->pc = 0x132a5cu;
    // NOP
label_132a60:
    // 0x132a60: 0x26220005  addiu       $v0, $s1, 0x5
    ctx->pc = 0x132a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x132a64: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x132a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x132a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132A68u;
    {
        const bool branch_taken_0x132a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A68u;
        // 0x132a6c: 0x2403fffa  addiu       $v1, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a68) {
            ctx->pc = 0x132A90u;
            goto label_132a90;
        }
    }
    ctx->pc = 0x132A70u;
    // 0x132a70: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x132a74: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x132a78: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x132a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132a84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x132A84u;
    {
        const bool branch_taken_0x132a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A84u;
        // 0x132a88: 0x24423630  addiu       $v0, $v0, 0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a84) {
            ctx->pc = 0x132B34u;
            goto label_132b34;
        }
    }
    ctx->pc = 0x132A8Cu;
    // 0x132a8c: 0x0  nop
    ctx->pc = 0x132a8cu;
    // NOP
label_132a90:
    // 0x132a90: 0x27828a30  addiu       $v0, $gp, -0x75D0
    ctx->pc = 0x132a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937136));
    // 0x132a94: 0x12230028  beq         $s1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x132A94u;
    {
        const bool branch_taken_0x132a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x132A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A94u;
        // 0x132a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a94) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132A9Cu;
    // 0x132a9c: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x132a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x132aa0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x132AA0u;
    {
        const bool branch_taken_0x132aa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x132AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AA0u;
        // 0x132aa4: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aa0) {
            ctx->pc = 0x132AD0u;
            goto label_132ad0;
        }
    }
    ctx->pc = 0x132AA8u;
    // 0x132aa8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132aac: 0x24042118  addiu       $a0, $zero, 0x2118
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x132ab0: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x132ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132ab4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x132ab8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x132ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132abc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x132AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132ABCu;
        // 0x132ac0: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132AE8u;
            goto label_132ae8;
        }
    }
    ctx->pc = 0x132AC4u;
    // 0x132ac4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x132AC4u;
    {
        const bool branch_taken_0x132ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AC4u;
        // 0x132ac8: 0x24420260  addiu       $v0, $v0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ac4) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132ACCu;
    // 0x132acc: 0x0  nop
    ctx->pc = 0x132accu;
    // NOP
label_132ad0:
    // 0x132ad0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132AD0u;
    {
        const bool branch_taken_0x132ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x132AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AD0u;
        // 0x132ad4: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ad0) {
            ctx->pc = 0x132AE8u;
            goto label_132ae8;
        }
    }
    ctx->pc = 0x132AD8u;
    // 0x132ad8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132adc: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x132adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132ae0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x132AE0u;
    {
        const bool branch_taken_0x132ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AE0u;
        // 0x132ae4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ae0) {
            ctx->pc = 0x132B34u;
            goto label_132b34;
        }
    }
    ctx->pc = 0x132AE8u;
label_132ae8:
    // 0x132ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132aec: 0x24846360  addiu       $a0, $a0, 0x6360
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25440));
    // 0x132af0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132AF0u;
    SET_GPR_U32(ctx, 31, 0x132AF8u);
    ctx->pc = 0x132AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AF0u;
    // 0x132af4: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132AF0u, 0x132AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AF8u;
label_132af8:
    // 0x132af8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x132af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x132afc: 0x8f8590e8  lw          $a1, -0x6F18($gp)
    ctx->pc = 0x132afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x132b00: 0x24846378  addiu       $a0, $a0, 0x6378
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25464));
    // 0x132b04: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132B04u;
    SET_GPR_U32(ctx, 31, 0x132B0Cu);
    ctx->pc = 0x132B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B04u;
    // 0x132b08: 0x26101080  addiu       $s0, $s0, 0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132B04u, 0x132B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B0Cu;
label_132b0c:
    // 0x132b0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x132b10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x132b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b14: 0x24a56388  addiu       $a1, $a1, 0x6388
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
    // 0x132b18: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x132B18u;
    SET_GPR_U32(ctx, 31, 0x132B20u);
    ctx->pc = 0x132B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B18u;
    // 0x132b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x132B18u, 0x132B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B20u;
label_132b20:
    // 0x132b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b28: 0xc068186  jal         func_1A0618
    ctx->pc = 0x132B28u;
    SET_GPR_U32(ctx, 31, 0x132B30u);
    ctx->pc = 0x132B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B28u;
    // 0x132b2c: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x132B28u, 0x132B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B30u;
label_132b30:
    // 0x132b30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132b34:
    // 0x132b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132b38:
    // 0x132b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132b40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132b44: 0x3e00008  jr          $ra
    ctx->pc = 0x132B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B44u;
        // 0x132b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B4Cu;
}
