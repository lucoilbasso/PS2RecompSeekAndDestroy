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

// Function: entry_00152e6c
// Address: 0x152e6c - 0x152ed8
void entry_00152e6c_0x152e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e6c_0x152e6c");
#endif

    ctx->pc = 0x152e6cu;

    // 0x152e6c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x152e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x152e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152e74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x152e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x152e78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x152e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x152e7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x152e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x152e80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x152e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x152e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x152e88: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x152e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x152e8c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x152e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x152e90: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x152e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x152e94: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x152e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x152e98: 0x14400288  bnez        $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x152E98u;
    {
        const bool branch_taken_0x152e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E98u;
        // 0x152e9c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e98) {
            ctx->pc = 0x1538BCu;
            return;
        }
    }
    ctx->pc = 0x152EA0u;
    // 0x152ea0: 0x263306dc  addiu       $s3, $s1, 0x6DC
    ctx->pc = 0x152ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x152ea4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152ea8: 0x52000042  beql        $s0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x152EA8u;
    {
        const bool branch_taken_0x152ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ea8) {
            ctx->pc = 0x152EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152EA8u;
            // 0x152eac: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            return;
        }
    }
    ctx->pc = 0x152EB0u;
    // 0x152eb0: 0x92020c04  lbu         $v0, 0xC04($s0)
    ctx->pc = 0x152eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x152eb4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x152eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x152eb8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x152EB8u;
    {
        const bool branch_taken_0x152eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EB8u;
        // 0x152ebc: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eb8) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152EC0u;
    // 0x152ec0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x152ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x152ec4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x152ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x152ec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152EC8u;
    {
        const bool branch_taken_0x152ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ec8) {
            ctx->pc = 0x152ED8u;
            return;
        }
    }
    ctx->pc = 0x152ED0u;
    // 0x152ed0: 0xc061920  jal         func_186480
    ctx->pc = 0x152ED0u;
    SET_GPR_U32(ctx, 31, 0x152ED8u);
    ctx->pc = 0x152ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ED0u;
    // 0x152ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x152ED0u, 0x152ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ED8u;
}
