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

// Function: entry_0012b3d0
// Address: 0x12b3d0 - 0x12b428
void entry_0012b3d0_0x12b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b3d0_0x12b3d0");
#endif

    ctx->pc = 0x12b3d0u;

    // 0x12b3d0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12b3d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12b3d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12b3dc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12b3e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b3e4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12b3e8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12b3ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12b3f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12b3f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12b3f8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12b3fc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x12b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x12b400: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x12b404: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12b404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12b408: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x12b40c: 0x8c450480  lw          $a1, 0x480($v0)
    ctx->pc = 0x12b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1152)));
    // 0x12b410: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12b414: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x12b414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12b418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B418u;
    {
        const bool branch_taken_0x12b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x96630006  lhu         $v1, 0x6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b418) {
            ctx->pc = 0x12B428u;
            return;
        }
    }
    ctx->pc = 0x12B420u;
    // 0x12b420: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b424: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x12b424u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b428u;
}
