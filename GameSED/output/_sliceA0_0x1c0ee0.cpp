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

// Function: _sliceA0
// Address: 0x1c0ee0 - 0x1c100c
void _sliceA0_0x1c0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceA0_0x1c0ee0");
#endif

    switch (ctx->pc) {
        case 0x1c0f18u: goto label_1c0f18;
        case 0x1c0f24u: goto label_1c0f24;
        case 0x1c0f48u: goto label_1c0f48;
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f60u: goto label_1c0f60;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f8cu: goto label_1c0f8c;
        default: break;
    }

    ctx->pc = 0x1c0ee0u;

    // 0x1c0ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c0ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0ee8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1c0ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1c0eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c0ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c0ef4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c0ef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c0efc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c0efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c0f04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c0f08: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c0f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c0f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c0f10: 0xc07084a  jal         func_1C2128
    ctx->pc = 0x1C0F10u;
    SET_GPR_U32(ctx, 31, 0x1C0F18u);
    ctx->pc = 0x1C0F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F10u;
    // 0x1c0f14: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C0F10u, 0x1C0F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F18u;
label_1c0f18:
    // 0x1c0f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f1c: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C0F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F24u);
    ctx->pc = 0x1C0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F1Cu;
    // 0x1c0f20: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C0F1Cu, 0x1C0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F24u;
label_1c0f24:
    // 0x1c0f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c0f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f28: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x1c0f2c: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x1c0f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x1c0f30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0F30u;
    {
        const bool branch_taken_0x1c0f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F30u;
        // 0x1c0f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f30) {
            ctx->pc = 0x1C0F50u;
            goto label_1c0f50;
        }
    }
    ctx->pc = 0x1C0F38u;
    // 0x1c0f38: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c0f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c0f3c: 0x24a5b568  addiu       $a1, $a1, -0x4A98
    ctx->pc = 0x1c0f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948200));
    // 0x1c0f40: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1C0F40u;
    SET_GPR_U32(ctx, 31, 0x1C0F48u);
    ctx->pc = 0x1C0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F40u;
    // 0x1c0f44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1C0F40u, 0x1C0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F48u;
label_1c0f48:
    // 0x1c0f48: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C0F48u;
    {
        const bool branch_taken_0x1c0f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F48u;
        // 0x1c0f4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f48) {
            ctx->pc = 0x1C0FE8u;
            goto label_1c0fe8;
        }
    }
    ctx->pc = 0x1C0F50u;
label_1c0f50:
    // 0x1c0f50: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C0F50u;
    SET_GPR_U32(ctx, 31, 0x1C0F58u);
    ctx->pc = 0x1C0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F50u;
    // 0x1c0f54: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C0F50u, 0x1C0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F58u;
label_1c0f58:
    // 0x1c0f58: 0xc07086a  jal         func_1C21A8
    ctx->pc = 0x1C0F58u;
    SET_GPR_U32(ctx, 31, 0x1C0F60u);
    ctx->pc = 0x1C0F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F58u;
    // 0x1c0f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21A8u, 0x1C0F58u, 0x1C0F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F60u;
label_1c0f60:
    // 0x1c0f60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c0f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f64: 0xc070332  jal         func_1C0CC8
    ctx->pc = 0x1C0F64u;
    SET_GPR_U32(ctx, 31, 0x1C0F6Cu);
    ctx->pc = 0x1C0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F64u;
    // 0x1c0f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CC8u, 0x1C0F64u, 0x1C0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F6Cu;
label_1c0f6c:
    // 0x1c0f6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c0f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f70: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x1c0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x1c0f74: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c0f78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0F78u;
    {
        const bool branch_taken_0x1c0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F78u;
        // 0x1c0f7c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f78) {
            ctx->pc = 0x1C0F94u;
            goto label_1c0f94;
        }
    }
    ctx->pc = 0x1C0F80u;
    // 0x1c0f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f84: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0F84u;
    SET_GPR_U32(ctx, 31, 0x1C0F8Cu);
    ctx->pc = 0x1C0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F84u;
    // 0x1c0f88: 0x24a5b590  addiu       $a1, $a1, -0x4A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0F84u, 0x1C0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F8Cu;
label_1c0f8c:
    // 0x1c0f8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0F8Cu;
    {
        const bool branch_taken_0x1c0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F8Cu;
        // 0x1c0f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f8c) {
            ctx->pc = 0x1C0FE8u;
            goto label_1c0fe8;
        }
    }
    ctx->pc = 0x1C0F94u;
label_1c0f94:
    // 0x1c0f94: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1c0f98: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1c0f9c: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1c0fa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0fa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fac: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1c0facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c0fb0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fbc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1c0fc0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x1c0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1c0fc4: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x1c0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x1c0fc8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c0fcc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c0fd0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c0fd4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c0fd8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0fdc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1c0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1c0fe0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1c0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1c0fe4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1c0fe8:
    // 0x1c0fe8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c0fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0fec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0ff0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c0ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0ff4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c0ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0ff8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c0ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0ffc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c0ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1004: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1004u;
        // 0x1c1008: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C100Cu;
}
