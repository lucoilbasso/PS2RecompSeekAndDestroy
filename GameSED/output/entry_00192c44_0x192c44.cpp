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

// Function: entry_00192c44
// Address: 0x192c44 - 0x192d6c
void entry_00192c44_0x192c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c44_0x192c44");
#endif

    switch (ctx->pc) {
        case 0x192c78u: goto label_192c78;
        case 0x192c9cu: goto label_192c9c;
        case 0x192cf0u: goto label_192cf0;
        case 0x192d38u: goto label_192d38;
        case 0x192d68u: goto label_192d68;
        default: break;
    }

    ctx->pc = 0x192c44u;

    // 0x192c44: 0xafb00124  sw          $s0, 0x124($sp)
    ctx->pc = 0x192c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 16));
    // 0x192c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c4c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x192c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x192c50: 0x2410004c  addiu       $s0, $zero, 0x4C
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x192c54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x192c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c58: 0x3ab10001  xori        $s1, $s5, 0x1
    ctx->pc = 0x192c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
    // 0x192c5c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x192c60: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192c64: 0x211b80a  movz        $s7, $s0, $s1
    ctx->pc = 0x192c64u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
    // 0x192c68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c6c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x192c70: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192C70u;
    SET_GPR_U32(ctx, 31, 0x192C78u);
    ctx->pc = 0x192C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C70u;
    // 0x192c74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192C70u, 0x192C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C78u;
label_192c78:
    // 0x192c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c7c: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192c80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192c84: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c8c: 0x26670220  addiu       $a3, $s3, 0x220
    ctx->pc = 0x192c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x192c90: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c94: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192C94u;
    SET_GPR_U32(ctx, 31, 0x192C9Cu);
    ctx->pc = 0x192C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C94u;
    // 0x192c98: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192C94u, 0x192C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C9Cu;
label_192c9c:
    // 0x192c9c: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x192ca0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ca4: 0x8e620234  lw          $v0, 0x234($s3)
    ctx->pc = 0x192ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192ca8: 0x2f1800b  movn        $s0, $s7, $s1
    ctx->pc = 0x192ca8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    // 0x192cac: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x192cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x192cb0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x192CB0u;
    {
        const bool branch_taken_0x192cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB0u;
        // 0x192cb4: 0x202b80a  movz        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cb0) {
            ctx->pc = 0x192D6Cu;
            return;
        }
    }
    ctx->pc = 0x192CB8u;
    // 0x192cb8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192cbc: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192cc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192cc4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x192cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x192cc8: 0xc6610238  lwc1        $f1, 0x238($s3)
    ctx->pc = 0x192cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192cd0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x192cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192cd4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ce0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ce4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192ce8: 0xc064dda  jal         func_193768
    ctx->pc = 0x192CE8u;
    SET_GPR_U32(ctx, 31, 0x192CF0u);
    ctx->pc = 0x192CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CE8u;
    // 0x192cec: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192CE8u, 0x192CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CF0u;
label_192cf0:
    // 0x192cf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x192cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192cf4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192cf8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x192cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192cfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192d00: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x192d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x192d04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x192d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192d08: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x192d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x192d0c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x192d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192d14: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x192d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192d18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x192d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192d1c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192d20: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192d24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d2c: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x192d2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x192d30: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192D30u;
    SET_GPR_U32(ctx, 31, 0x192D38u);
    ctx->pc = 0x192D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D30u;
    // 0x192d34: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192D30u, 0x192D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D38u;
label_192d38:
    // 0x192d38: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x192d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d44: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x192d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d4c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x192d50: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x192d54: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x192d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x192d58: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192d5c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192d5cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192d60: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192D60u;
    SET_GPR_U32(ctx, 31, 0x192D68u);
    ctx->pc = 0x192D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D60u;
    // 0x192d64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192D60u, 0x192D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192d6cu;
}
