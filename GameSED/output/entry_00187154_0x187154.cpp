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

// Function: entry_00187154
// Address: 0x187154 - 0x1871b0
void entry_00187154_0x187154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187154_0x187154");
#endif

    switch (ctx->pc) {
        case 0x187198u: goto label_187198;
        case 0x1871a4u: goto label_1871a4;
        default: break;
    }

    ctx->pc = 0x187154u;

    // 0x187154: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187158: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18715c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187160: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x187160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x187164: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x187164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187168: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x187168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18716c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187170: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187170u;
        // 0x187174: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187170) {
            ctx->pc = 0x1872A0u;
            return;
        }
    }
    ctx->pc = 0x187178u;
    // 0x187178: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x187178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18717c: 0x2442d000  addiu       $v0, $v0, -0x3000
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955008));
    // 0x187180: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x187180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187184: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187184u;
    {
        const bool branch_taken_0x187184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187184u;
        // 0x187188: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187184) {
            ctx->pc = 0x1871B0u;
            return;
        }
    }
    ctx->pc = 0x18718Cu;
    // 0x18718c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x187190: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x187190u;
    SET_GPR_U32(ctx, 31, 0x187198u);
    ctx->pc = 0x187194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187190u;
    // 0x187194: 0x24847ef0  addiu       $a0, $a0, 0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x187190u, 0x187198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187198u;
label_187198:
    // 0x187198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18719c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x18719Cu;
    SET_GPR_U32(ctx, 31, 0x1871A4u);
    ctx->pc = 0x1871A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18719Cu;
    // 0x1871a0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x18719Cu, 0x1871A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871A4u;
label_1871a4:
    // 0x1871a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x1871B8u;
            return;
        }
    }
    ctx->pc = 0x1871ACu;
    // 0x1871ac: 0x0  nop
    ctx->pc = 0x1871acu;
    // NOP
    ctx->pc = 0x1871b0u;
}
