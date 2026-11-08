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

// Function: strFileOpen
// Address: 0x174c20 - 0x174efc
void strFileOpen_0x174c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileOpen_0x174c20");
#endif

    switch (ctx->pc) {
        case 0x174c50u: goto label_174c50;
        case 0x174c74u: goto label_174c74;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c9cu: goto label_174c9c;
        case 0x174cb8u: goto label_174cb8;
        case 0x174d10u: goto label_174d10;
        case 0x174d50u: goto label_174d50;
        case 0x174d8cu: goto label_174d8c;
        case 0x174db4u: goto label_174db4;
        case 0x174dd0u: goto label_174dd0;
        case 0x174dd8u: goto label_174dd8;
        case 0x174de8u: goto label_174de8;
        case 0x174df4u: goto label_174df4;
        case 0x174e18u: goto label_174e18;
        case 0x174e38u: goto label_174e38;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e64u: goto label_174e64;
        case 0x174e80u: goto label_174e80;
        case 0x174e9cu: goto label_174e9c;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ed0u: goto label_174ed0;
        case 0x174ed8u: goto label_174ed8;
        default: break;
    }

    ctx->pc = 0x174c20u;

    // 0x174c20: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x174c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x174c24: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x174c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x174c28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x174c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c2c: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x174c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x174c30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c34: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x174c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x174c38: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x174c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x174c3c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x174c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x174c40: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x174c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x174c44: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x174c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x174c48: 0xc073d56  jal         func_1CF558
    ctx->pc = 0x174C48u;
    SET_GPR_U32(ctx, 31, 0x174C50u);
    ctx->pc = 0x174C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C48u;
    // 0x174c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF558u, 0x174C48u, 0x174C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C50u;
label_174c50:
    // 0x174c50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c54: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x174C54u;
    {
        const bool branch_taken_0x174c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C54u;
        // 0x174c58: 0x27b30100  addiu       $s3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c54) {
            ctx->pc = 0x174D58u;
            goto label_174d58;
        }
    }
    ctx->pc = 0x174C5Cu;
    // 0x174c5c: 0x2348023  subu        $s0, $s1, $s4
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x174c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c6c: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x174C6Cu;
    SET_GPR_U32(ctx, 31, 0x174C74u);
    ctx->pc = 0x174C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C6Cu;
    // 0x174c70: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x174C6Cu, 0x174C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C74u;
label_174c74:
    // 0x174c74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174c78: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x174c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c80: 0x24a5d490  addiu       $a1, $a1, -0x2B70
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    // 0x174c84: 0xc074266  jal         func_1D0998
    ctx->pc = 0x174C84u;
    SET_GPR_U32(ctx, 31, 0x174C8Cu);
    ctx->pc = 0x174C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C84u;
    // 0x174c88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x174C84u, 0x174C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C8Cu;
label_174c8c:
    // 0x174c8c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x174C8Cu;
    {
        const bool branch_taken_0x174c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C8Cu;
        // 0x174c90: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c8c) {
            ctx->pc = 0x174D38u;
            goto label_174d38;
        }
    }
    ctx->pc = 0x174C94u;
    // 0x174c94: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x174C94u;
    SET_GPR_U32(ctx, 31, 0x174C9Cu);
    ctx->pc = 0x174C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C94u;
    // 0x174c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x174C94u, 0x174C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C9Cu;
label_174c9c:
    // 0x174c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x174ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ca8: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x174CA8u;
    {
        const bool branch_taken_0x174ca8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca8) {
            ctx->pc = 0x174D04u;
            goto label_174d04;
        }
    }
    ctx->pc = 0x174CB0u;
    // 0x174cb0: 0x240b002f  addiu       $t3, $zero, 0x2F
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x174cb4: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x174cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_174cb8:
    // 0x174cb8: 0x2273021  addu        $a2, $s1, $a3
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x174cbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x174cc0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x174cc4: 0xe9402a  slt         $t0, $a3, $t1
    ctx->pc = 0x174cc4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x174cc8: 0x144b0003  bne         $v0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x174CC8u;
    {
        const bool branch_taken_0x174cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x174CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC8u;
        // 0x174ccc: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cc8) {
            ctx->pc = 0x174CD8u;
            goto label_174cd8;
        }
    }
    ctx->pc = 0x174CD0u;
    // 0x174cd0: 0xa0ca0000  sb          $t2, 0x0($a2)
    ctx->pc = 0x174cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x174cd4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x174cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_174cd8:
    // 0x174cd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x174cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x174cdc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x174cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x174ce0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174ce8: 0x9042c2a9  lbu         $v0, -0x3D57($v0)
    ctx->pc = 0x174ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951593)));
    // 0x174cec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x174cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cf0: 0x2465ffe0  addiu       $a1, $v1, -0x20
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x174cf4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x174cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x174cf8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x174cf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x174cfc: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x174CFCu;
    {
        const bool branch_taken_0x174cfc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CFCu;
        // 0x174d00: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cfc) {
            ctx->pc = 0x174CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174D04u;
label_174d04:
    // 0x174d04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d08: 0xc073d56  jal         func_1CF558
    ctx->pc = 0x174D08u;
    SET_GPR_U32(ctx, 31, 0x174D10u);
    ctx->pc = 0x174D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D08u;
    // 0x174d0c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF558u, 0x174D08u, 0x174D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D10u;
label_174d10:
    // 0x174d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D10u;
    {
        const bool branch_taken_0x174d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D10u;
        // 0x174d14: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d10) {
            ctx->pc = 0x174D20u;
            goto label_174d20;
        }
    }
    ctx->pc = 0x174D18u;
    // 0x174d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174D18u;
    {
        const bool branch_taken_0x174d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D18u;
        // 0x174d1c: 0x2447d498  addiu       $a3, $v0, -0x2B68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d18) {
            ctx->pc = 0x174D28u;
            goto label_174d28;
        }
    }
    ctx->pc = 0x174D20u;
label_174d20:
    // 0x174d20: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174d24: 0x2447d4a0  addiu       $a3, $v0, -0x2B60
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956192));
label_174d28:
    // 0x174d28: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174D30u;
    {
        const bool branch_taken_0x174d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D30u;
        // 0x174d34: 0x24a5d4a8  addiu       $a1, $a1, -0x2B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d30) {
            ctx->pc = 0x174D48u;
            goto label_174d48;
        }
    }
    ctx->pc = 0x174D38u;
label_174d38:
    // 0x174d38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x174d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174d3c: 0x24a5d4b0  addiu       $a1, $a1, -0x2B50
    ctx->pc = 0x174d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956208));
    // 0x174d40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x174d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174d48:
    // 0x174d48: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x174D48u;
    SET_GPR_U32(ctx, 31, 0x174D50u);
    ctx->pc = 0x174D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D48u;
    // 0x174d4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x174D48u, 0x174D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D50u;
label_174d50:
    // 0x174d50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x174D50u;
    {
        const bool branch_taken_0x174d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D50u;
        // 0x174d54: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d50) {
            ctx->pc = 0x174D90u;
            goto label_174d90;
        }
    }
    ctx->pc = 0x174D58u;
label_174d58:
    // 0x174d58: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174d5c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x174d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174d60: 0x2442d4b8  addiu       $v0, $v0, -0x2B48
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956216));
    // 0x174d64: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174d68: 0x94480004  lhu         $t0, 0x4($v0)
    ctx->pc = 0x174d68u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x25D4BCu));
    // 0x174d6c: 0x24a5d4b0  addiu       $a1, $a1, -0x2B50
    ctx->pc = 0x174d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956208));
    // 0x174d70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D4B8u));
    // 0x174d74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x174d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d7c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x174d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x174d80: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x174d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x174d84: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x174D84u;
    SET_GPR_U32(ctx, 31, 0x174D8Cu);
    ctx->pc = 0x174D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D84u;
    // 0x174d88: 0xa7a80104  sh          $t0, 0x104($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x174D84u, 0x174D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D8Cu;
label_174d8c:
    // 0x174d8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_174d90:
    // 0x174d90: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x174D90u;
    {
        const bool branch_taken_0x174d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D90u;
        // 0x174d94: 0x8f828c18  lw          $v0, -0x73E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d90) {
            ctx->pc = 0x174E40u;
            goto label_174e40;
        }
    }
    ctx->pc = 0x174D98u;
    // 0x174d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DA8u;
            goto label_174da8;
        }
    }
    ctx->pc = 0x174DA0u;
    // 0x174da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174da4: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x174da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
label_174da8:
    // 0x174da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dac: 0xc06d5b2  jal         func_1B56C8
    ctx->pc = 0x174DACu;
    SET_GPR_U32(ctx, 31, 0x174DB4u);
    ctx->pc = 0x174DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DACu;
    // 0x174db0: 0x34848010  ori         $a0, $a0, 0x8010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32784);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B56C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56C8u, 0x174DACu, 0x174DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DB4u;
label_174db4:
    // 0x174db4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x174db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x174db8: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x174dbc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x174dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x174dc0: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x174dc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174dc8: 0xc06ed3e  jal         func_1BB4F8
    ctx->pc = 0x174DC8u;
    SET_GPR_U32(ctx, 31, 0x174DD0u);
    ctx->pc = 0x174DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DC8u;
    // 0x174dcc: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB4F8u, 0x174DC8u, 0x174DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DD0u;
label_174dd0:
    // 0x174dd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174DD0u;
    {
        const bool branch_taken_0x174dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD0u;
        // 0x174dd4: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd0) {
            ctx->pc = 0x174DE8u;
            goto label_174de8;
        }
    }
    ctx->pc = 0x174DD8u;
label_174dd8:
    // 0x174dd8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174DD8u;
    {
        const bool branch_taken_0x174dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD8u;
        // 0x174ddc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd8) {
            ctx->pc = 0x174DE8u;
            goto label_174de8;
        }
    }
    ctx->pc = 0x174DE0u;
    // 0x174de0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174DE0u;
    SET_GPR_U32(ctx, 31, 0x174DE8u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174DE0u, 0x174DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DE8u;
label_174de8:
    // 0x174de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dec: 0xc06e96e  jal         func_1BA5B8
    ctx->pc = 0x174DECu;
    SET_GPR_U32(ctx, 31, 0x174DF4u);
    ctx->pc = 0x174DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DECu;
    // 0x174df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5B8u, 0x174DECu, 0x174DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DF4u;
label_174df4:
    // 0x174df4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174df8: 0x24847798  addiu       $a0, $a0, 0x7798
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    // 0x174dfc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x174DFCu;
    {
        const bool branch_taken_0x174dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DFCu;
        // 0x174e00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dfc) {
            ctx->pc = 0x174DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174dd8;
        }
    }
    ctx->pc = 0x174E04u;
    // 0x174e04: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174E04u;
    {
        const bool branch_taken_0x174e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E04u;
        // 0x174e08: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e04) {
            ctx->pc = 0x174E18u;
            goto label_174e18;
        }
    }
    ctx->pc = 0x174E0Cu;
    // 0x174e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E10u;
    SET_GPR_U32(ctx, 31, 0x174E18u);
    ctx->pc = 0x174E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E10u;
    // 0x174e14: 0x248477c0  addiu       $a0, $a0, 0x77C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E10u, 0x174E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E18u;
label_174e18:
    // 0x174e18: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x174e1c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x174e20: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x174e24: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x174e28: 0xa3a00140  sb          $zero, 0x140($sp)
    ctx->pc = 0x174e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x174e2c: 0xa3a00141  sb          $zero, 0x141($sp)
    ctx->pc = 0x174e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 321), (uint8_t)GPR_U32(ctx, 0));
    // 0x174e30: 0xc06ed4a  jal         func_1BB528
    ctx->pc = 0x174E30u;
    SET_GPR_U32(ctx, 31, 0x174E38u);
    ctx->pc = 0x174E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E30u;
    // 0x174e34: 0xa3a00142  sb          $zero, 0x142($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB528u, 0x174E30u, 0x174E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E38u;
label_174e38:
    // 0x174e38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174E38u;
    {
        const bool branch_taken_0x174e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E38u;
        // 0x174e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e38) {
            ctx->pc = 0x174EDCu;
            goto label_174edc;
        }
    }
    ctx->pc = 0x174E40u;
label_174e40:
    // 0x174e40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e44: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x174E44u;
    SET_GPR_U32(ctx, 31, 0x174E4Cu);
    ctx->pc = 0x174E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E44u;
    // 0x174e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x174E44u, 0x174E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E4Cu;
label_174e4c:
    // 0x174e4c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174E4Cu;
    {
        const bool branch_taken_0x174e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E4Cu;
        // 0x174e50: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e4c) {
            ctx->pc = 0x174E70u;
            goto label_174e70;
        }
    }
    ctx->pc = 0x174E54u;
    // 0x174e54: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174e58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e5c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E5Cu;
    SET_GPR_U32(ctx, 31, 0x174E64u);
    ctx->pc = 0x174E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E5Cu;
    // 0x174e60: 0x248477e8  addiu       $a0, $a0, 0x77E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E5Cu, 0x174E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E64u;
label_174e64:
    // 0x174e64: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174E64u;
    {
        const bool branch_taken_0x174e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E64u;
        // 0x174e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e64) {
            ctx->pc = 0x174EDCu;
            goto label_174edc;
        }
    }
    ctx->pc = 0x174E6Cu;
    // 0x174e6c: 0x0  nop
    ctx->pc = 0x174e6cu;
    // NOP
label_174e70:
    // 0x174e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e78: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x174E78u;
    SET_GPR_U32(ctx, 31, 0x174E80u);
    ctx->pc = 0x174E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E78u;
    // 0x174e7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x174E78u, 0x174E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E80u;
label_174e80:
    // 0x174e80: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174E80u;
    {
        const bool branch_taken_0x174e80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E80u;
        // 0x174e84: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e80) {
            ctx->pc = 0x174EA8u;
            goto label_174ea8;
        }
    }
    ctx->pc = 0x174E88u;
    // 0x174e88: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174e8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e90: 0x24847808  addiu       $a0, $a0, 0x7808
    ctx->pc = 0x174e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30728));
    // 0x174e94: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E94u;
    SET_GPR_U32(ctx, 31, 0x174E9Cu);
    ctx->pc = 0x174E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E94u;
    // 0x174e98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E94u, 0x174E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E9Cu;
label_174e9c:
    // 0x174e9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174E9Cu;
    {
        const bool branch_taken_0x174e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e9c) {
            ctx->pc = 0x174ED0u;
            goto label_174ed0;
        }
    }
    ctx->pc = 0x174EA4u;
    // 0x174ea4: 0x0  nop
    ctx->pc = 0x174ea4u;
    // NOP
label_174ea8:
    // 0x174ea8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x174eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174eb0: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x174EB0u;
    SET_GPR_U32(ctx, 31, 0x174EB8u);
    ctx->pc = 0x174EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EB0u;
    // 0x174eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x174EB0u, 0x174EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EB8u;
label_174eb8:
    // 0x174eb8: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174EB8u;
    {
        const bool branch_taken_0x174eb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x174eb8) {
            ctx->pc = 0x174EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174EB8u;
            // 0x174ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174EDCu;
            goto label_174edc;
        }
    }
    ctx->pc = 0x174EC0u;
    // 0x174ec0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ec8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174EC8u;
    SET_GPR_U32(ctx, 31, 0x174ED0u);
    ctx->pc = 0x174ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EC8u;
    // 0x174ecc: 0x24847828  addiu       $a0, $a0, 0x7828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174EC8u, 0x174ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ED0u;
label_174ed0:
    // 0x174ed0: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x174ED0u;
    SET_GPR_U32(ctx, 31, 0x174ED8u);
    ctx->pc = 0x174ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ED0u;
    // 0x174ed4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x174ED0u, 0x174ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ED8u;
label_174ed8:
    // 0x174ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174edc:
    // 0x174edc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x174edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x174ee0: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x174ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x174ee4: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x174ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x174ee8: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x174ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x174eec: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x174eecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x174ef0: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x174ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x174ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x174EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EF4u;
        // 0x174ef8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EFCu;
}
