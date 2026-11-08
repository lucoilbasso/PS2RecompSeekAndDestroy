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

// Function: entry_001709a4
// Address: 0x1709a4 - 0x170a50
void entry_001709a4_0x1709a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001709a4_0x1709a4");
#endif

    switch (ctx->pc) {
        case 0x1709d8u: goto label_1709d8;
        case 0x170a1cu: goto label_170a1c;
        case 0x170a3cu: goto label_170a3c;
        default: break;
    }

    ctx->pc = 0x1709a4u;

    // 0x1709a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1709a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1709a8: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1709a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1709ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1709acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b0: 0x3c100005  lui         $s0, 0x5
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)5 << 16));
    // 0x1709b4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1709b8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1709b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1709bc: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1709c0: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1709c4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1709c8: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1709cc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1709ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1709d0: 0xc05c5e0  jal         func_171780
    ctx->pc = 0x1709D0u;
    SET_GPR_U32(ctx, 31, 0x1709D8u);
    ctx->pc = 0x1709D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709D0u;
    // 0x1709d4: 0x222800b  movn        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171780u, 0x1709D0u, 0x1709D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709D8u;
label_1709d8:
    // 0x1709d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1709dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1709e0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1709e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1709e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1709e8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1709ec: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1709f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1709f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1709f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1709f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1709fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1709fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x170a00: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x170a04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a08: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x170a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a0c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x170a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x170a10: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a14: 0xc05c2d8  jal         func_170B60
    ctx->pc = 0x170A14u;
    SET_GPR_U32(ctx, 31, 0x170A1Cu);
    ctx->pc = 0x170A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A14u;
    // 0x170a18: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B60u, 0x170A14u, 0x170A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A1Cu;
label_170a1c:
    // 0x170a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a24: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x170A24u;
    {
        const bool branch_taken_0x170a24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x170A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A24u;
        // 0x170a28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a24) {
            ctx->pc = 0x170A50u;
            return;
        }
    }
    ctx->pc = 0x170A2Cu;
    // 0x170a2c: 0xdea60018  ld          $a2, 0x18($s5)
    ctx->pc = 0x170a2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x170a30: 0xdea50010  ld          $a1, 0x10($s5)
    ctx->pc = 0x170a30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x170a34: 0xc05c604  jal         func_171810
    ctx->pc = 0x170A34u;
    SET_GPR_U32(ctx, 31, 0x170A3Cu);
    ctx->pc = 0x170A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A34u;
    // 0x170a38: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x170A34u, 0x170A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A3Cu;
label_170a3c:
    // 0x170a3c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x170a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x170a40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170A40u;
    {
        const bool branch_taken_0x170a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A40u;
        // 0x170a44: 0x248476a0  addiu       $a0, $a0, 0x76A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a40) {
            ctx->pc = 0x170A50u;
            return;
        }
    }
    ctx->pc = 0x170A48u;
    // 0x170a48: 0xc05c246  jal         func_170918
    ctx->pc = 0x170A48u;
    SET_GPR_U32(ctx, 31, 0x170A50u);
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x170A48u, 0x170A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A50u;
}
