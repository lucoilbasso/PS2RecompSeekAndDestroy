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

// Function: entry_00188288
// Address: 0x188288 - 0x1882b8
void entry_00188288_0x188288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188288_0x188288");
#endif

    ctx->pc = 0x188288u;

    // 0x188288: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x188288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x18828c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x188290: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x188290u;
    {
        const bool branch_taken_0x188290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188290) {
            ctx->pc = 0x188294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188290u;
            // 0x188294: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1884E0u;
            return;
        }
    }
    ctx->pc = 0x188298u;
    // 0x188298: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x18829c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1882a0: 0x2463d600  addiu       $v1, $v1, -0x2A00
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
    // 0x1882a4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x1882B8u;
            return;
        }
    }
    ctx->pc = 0x1882ACu;
    // 0x1882ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1882b0: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
    ctx->pc = 0x1882B0u;
    {
        const bool branch_taken_0x1882b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882b0) {
            ctx->pc = 0x1882B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1882B0u;
            // 0x1882b4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18852Cu;
            return;
        }
    }
    ctx->pc = 0x1882B8u;
}
