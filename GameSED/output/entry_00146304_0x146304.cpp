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

// Function: entry_00146304
// Address: 0x146304 - 0x146348
void entry_00146304_0x146304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146304_0x146304");
#endif

    ctx->pc = 0x146304u;

    // 0x146304: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146308: 0xfe0204e0  sd          $v0, 0x4E0($s0)
    ctx->pc = 0x146308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1248), GPR_U64(ctx, 2));
    // 0x14630c: 0x8e0304e0  lw          $v1, 0x4E0($s0)
    ctx->pc = 0x14630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x146310: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x146310u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x146314: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x146318: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x146318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14631c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x14631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x146320: 0x28644000  slti        $a0, $v1, 0x4000
    ctx->pc = 0x146320u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x146324: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x146324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146328: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x146328u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x14632c: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x14632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x146330: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146330u;
    {
        const bool branch_taken_0x146330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146330u;
        // 0x146334: 0xfe0504e8  sd          $a1, 0x4E8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1256), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146330) {
            ctx->pc = 0x146348u;
            return;
        }
    }
    ctx->pc = 0x146338u;
    // 0x146338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14633c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x146340: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x146340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x146344: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x146344u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x146348u;
}
