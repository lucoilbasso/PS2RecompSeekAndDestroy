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

// Function: entry_001a12fc
// Address: 0x1a12fc - 0x1a134c
void entry_001a12fc_0x1a12fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12fc_0x1a12fc");
#endif

    ctx->pc = 0x1a12fcu;

    // 0x1a12fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1304: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a130c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1310: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1314: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a1318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a131c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1320: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1324: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a1328: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a1328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1a132c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1330: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1334: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a1334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a1338: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a133c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a133cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1340: 0xac322c00  sw          $s2, 0x2C00($at)
    ctx->pc = 0x1a1340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 18));
    // 0x1a1344: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A12C0u;
            return;
        }
    }
    ctx->pc = 0x1A134Cu;
}
