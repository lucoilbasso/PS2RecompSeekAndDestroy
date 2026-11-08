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

// Function: entry_001a8300
// Address: 0x1a8300 - 0x1a8358
void entry_001a8300_0x1a8300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8300_0x1a8300");
#endif

    switch (ctx->pc) {
        case 0x1a8350u: goto label_1a8350;
        default: break;
    }

    ctx->pc = 0x1a8300u;

    // 0x1a8300: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1a8304: 0x8f869080  lw          $a2, -0x6F80($gp)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a8308: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a830c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a830cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8310: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a8314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a831c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x1a831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1a8320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a8320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8324: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1a8324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a8328: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a8328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1a832c: 0x32bc3  sra         $a1, $v1, 15
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1a8330: 0x28a40708  slti        $a0, $a1, 0x708
    ctx->pc = 0x1a8330u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x1a8334: 0x24a2f1f0  addiu       $v0, $a1, -0xE10
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    // 0x1a8338: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8338u;
    {
        const bool branch_taken_0x1a8338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8338u;
        // 0x1a833c: 0x44280a  movz        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8338) {
            ctx->pc = 0x1A8368u;
            return;
        }
    }
    ctx->pc = 0x1A8340u;
    // 0x1a8340: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8340u;
    {
        const bool branch_taken_0x1a8340 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a8340) {
            ctx->pc = 0x1A8344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8340u;
            // 0x1a8344: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8358u;
            return;
        }
    }
    ctx->pc = 0x1A8348u;
    // 0x1a8348: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8348u;
    SET_GPR_U32(ctx, 31, 0x1A8350u);
    ctx->pc = 0x1A834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8348u;
    // 0x1a834c: 0x26e4d920  addiu       $a0, $s7, -0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8348u, 0x1A8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8350u;
label_1a8350:
    // 0x1a8350: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A8350u;
    {
        const bool branch_taken_0x1a8350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8350) {
            ctx->pc = 0x1A83C4u;
            return;
        }
    }
    ctx->pc = 0x1A8358u;
}
