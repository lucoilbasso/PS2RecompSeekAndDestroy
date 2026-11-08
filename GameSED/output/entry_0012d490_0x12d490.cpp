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

// Function: entry_0012d490
// Address: 0x12d490 - 0x12d4d8
void entry_0012d490_0x12d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d490_0x12d490");
#endif

    ctx->pc = 0x12d490u;

label_12d490:
    // 0x12d490: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12d490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12d494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d498: 0x0  nop
    ctx->pc = 0x12d498u;
    // NOP
    // 0x12d49c: 0x0  nop
    ctx->pc = 0x12d49cu;
    // NOP
    // 0x12d4a0: 0x0  nop
    ctx->pc = 0x12d4a0u;
    // NOP
    // 0x12d4a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D4A4u;
    {
        const bool branch_taken_0x12d4a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4A4u;
        // 0x12d4a8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4a4) {
            ctx->pc = 0x12D490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d490;
        }
    }
    ctx->pc = 0x12D4ACu;
    // 0x12d4ac: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12d4b0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4b4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12d4b8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x12d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12d4c0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d4c4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4c8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12d4cc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12d4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x12d4d8u;
}
