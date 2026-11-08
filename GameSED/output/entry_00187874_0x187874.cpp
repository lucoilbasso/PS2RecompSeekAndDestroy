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

// Function: entry_00187874
// Address: 0x187874 - 0x187910
void entry_00187874_0x187874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187874_0x187874");
#endif

    switch (ctx->pc) {
        case 0x187890u: goto label_187890;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878f8u: goto label_1878f8;
        case 0x187904u: goto label_187904;
        default: break;
    }

    ctx->pc = 0x187874u;

    // 0x187874: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x187874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x187878: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x187878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18787c: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x187880: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187884: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x187884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x187888: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187888u;
    SET_GPR_U32(ctx, 31, 0x187890u);
    ctx->pc = 0x18788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187888u;
    // 0x18788c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187888u, 0x187890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187890u;
label_187890:
    // 0x187890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x187898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x187898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18789c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878a0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1878a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1878a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1878a8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1878ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1878acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1878b0: 0xc0611ae  jal         func_1846B8
    ctx->pc = 0x1878B0u;
    SET_GPR_U32(ctx, 31, 0x1878B8u);
    ctx->pc = 0x1878B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878B0u;
    // 0x1878b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1846B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1846B8u, 0x1878B0u, 0x1878B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878B8u;
label_1878b8:
    // 0x1878b8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1878b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1878bc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1878c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1878c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1878c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1878c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1878c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1878cc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1878ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1878d0: 0x24c6d000  addiu       $a2, $a2, -0x3000
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955008));
    // 0x1878d4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1878d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1878dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1878e0: 0x46302b  sltu        $a2, $v0, $a2
    ctx->pc = 0x1878e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1878e4: 0x24847f18  addiu       $a0, $a0, 0x7F18
    ctx->pc = 0x1878e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    // 0x1878e8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1878E8u;
    {
        const bool branch_taken_0x1878e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e8) {
            ctx->pc = 0x187910u;
            return;
        }
    }
    ctx->pc = 0x1878F0u;
    // 0x1878f0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1878F0u;
    SET_GPR_U32(ctx, 31, 0x1878F8u);
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1878F0u, 0x1878F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1878fc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878FCu;
    // 0x187900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1878FCu, 0x187904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187904u;
label_187904:
    // 0x187904: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187904u;
        // 0x187908: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187904) {
            ctx->pc = 0x187918u;
            return;
        }
    }
    ctx->pc = 0x18790Cu;
    // 0x18790c: 0x0  nop
    ctx->pc = 0x18790cu;
    // NOP
    ctx->pc = 0x187910u;
}
