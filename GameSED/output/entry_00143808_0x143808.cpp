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

// Function: entry_00143808
// Address: 0x143808 - 0x14385c
void entry_00143808_0x143808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143808_0x143808");
#endif

    switch (ctx->pc) {
        case 0x143810u: goto label_143810;
        default: break;
    }

    ctx->pc = 0x143808u;

    // 0x143808: 0xc065800  jal         func_196000
    ctx->pc = 0x143808u;
    SET_GPR_U32(ctx, 31, 0x143810u);
    ctx->pc = 0x196000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196000u, 0x143808u, 0x143810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143810u;
label_143810:
    // 0x143810: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x143814: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143818: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x14381c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x143820: 0x26500150  addiu       $s0, $s2, 0x150
    ctx->pc = 0x143820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x143824: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x143824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x143828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14382c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14382cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143830: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x143830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x143834: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
    // 0x143838: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x143838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x14383c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x14383cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x143840: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x143840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x143844: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x143848: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143848u;
    {
        const bool branch_taken_0x143848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143848u;
        // 0x14384c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143848) {
            ctx->pc = 0x14385Cu;
            return;
        }
    }
    ctx->pc = 0x143850u;
    // 0x143850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143854: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x143854u;
    {
        const bool branch_taken_0x143854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143854) {
            ctx->pc = 0x143858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143854u;
            // 0x143858: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143888u;
            return;
        }
    }
    ctx->pc = 0x14385Cu;
}
