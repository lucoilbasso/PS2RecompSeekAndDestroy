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

// Function: entry_00161e90
// Address: 0x161e90 - 0x161ef8
void entry_00161e90_0x161e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161e90_0x161e90");
#endif

    ctx->pc = 0x161e90u;

    // 0x161e90: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x161E90u;
    {
        const bool branch_taken_0x161e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e90) {
            ctx->pc = 0x161E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E90u;
            // 0x161e94: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            return;
        }
    }
    ctx->pc = 0x161E98u;
    // 0x161e98: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x161e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161ea0: 0x50620098  beql        $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x161EA0u;
    {
        const bool branch_taken_0x161ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161ea0) {
            ctx->pc = 0x161EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EA0u;
            // 0x161ea4: 0xad430020  sw          $v1, 0x20($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162104u;
            return;
        }
    }
    ctx->pc = 0x161EA8u;
    // 0x161ea8: 0x58600097  blezl       $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x161EA8u;
    {
        const bool branch_taken_0x161ea8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x161ea8) {
            ctx->pc = 0x161EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EA8u;
            // 0x161eac: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            return;
        }
    }
    ctx->pc = 0x161EB0u;
    // 0x161eb0: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x161eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x161eb4: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x161EB4u;
    {
        const bool branch_taken_0x161eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161eb4) {
            ctx->pc = 0x161EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EB4u;
            // 0x161eb8: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            return;
        }
    }
    ctx->pc = 0x161EBCu;
    // 0x161ebc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x161ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x161ec0: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x161EC0u;
    {
        const bool branch_taken_0x161ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ec0) {
            ctx->pc = 0x161EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EC0u;
            // 0x161ec4: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            return;
        }
    }
    ctx->pc = 0x161EC8u;
    // 0x161ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161ecc: 0x268711b0  addiu       $a3, $s4, 0x11B0
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4528));
    // 0x161ed0: 0xad420020  sw          $v0, 0x20($t2)
    ctx->pc = 0x161ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 2));
    // 0x161ed4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x161ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed8: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x161ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161edc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x161edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ee0: 0x25440010  addiu       $a0, $t2, 0x10
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x161ee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161ee8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161eec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x161EECu;
    {
        const bool branch_taken_0x161eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EECu;
        // 0x161ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161eec) {
            ctx->pc = 0x161F9Cu;
            return;
        }
    }
    ctx->pc = 0x161EF4u;
    // 0x161ef4: 0x0  nop
    ctx->pc = 0x161ef4u;
    // NOP
    ctx->pc = 0x161ef8u;
}
