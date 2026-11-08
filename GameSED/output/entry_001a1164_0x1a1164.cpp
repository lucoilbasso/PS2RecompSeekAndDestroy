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

// Function: entry_001a1164
// Address: 0x1a1164 - 0x1a11b0
void entry_001a1164_0x1a1164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1164_0x1a1164");
#endif

    ctx->pc = 0x1a1164u;

    // 0x1a1164: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1168: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a116c: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1170: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1174: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1178: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a117c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1180: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1184: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1188: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a118c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a118cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a1190: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1194: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1198: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a1198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a119c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a11a0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a11a4: 0xac312c00  sw          $s1, 0x2C00($at)
    ctx->pc = 0x1a11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 17));
    // 0x1a11a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A11A8u;
    {
        const bool branch_taken_0x1a11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11A8u;
        // 0x1a11ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11a8) {
            ctx->pc = 0x1A11C0u;
            return;
        }
    }
    ctx->pc = 0x1A11B0u;
}
