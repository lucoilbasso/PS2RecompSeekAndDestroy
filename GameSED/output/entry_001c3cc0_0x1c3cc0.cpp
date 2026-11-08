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

// Function: entry_001c3cc0
// Address: 0x1c3cc0 - 0x1c3d24
void entry_001c3cc0_0x1c3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3cc0_0x1c3cc0");
#endif

    ctx->pc = 0x1c3cc0u;

    // 0x1c3cc0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1c3cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3cc4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3CC4u;
    {
        const bool branch_taken_0x1c3cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CC4u;
        // 0x1c3cc8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cc4) {
            ctx->pc = 0x1C3D24u;
            return;
        }
    }
    ctx->pc = 0x1C3CCCu;
    // 0x1c3ccc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1c3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c3cd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3cd4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1c3cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1c3cd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c3cd8u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1c3cdc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1c3cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1c3ce0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c3ce4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3ce8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1c3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1c3cec: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1c3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3cf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3cf0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x1c3cf4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1c3cf8: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x1c3cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x1c3cfc: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3d00: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c3d04: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c3d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c3d08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c3d0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c3d10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c3d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c3d14: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1c3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c3d18: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1c3d1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C3D1Cu;
    {
        const bool branch_taken_0x1c3d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D1Cu;
        // 0x1c3d20: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d1c) {
            ctx->pc = 0x1C3D54u;
            return;
        }
    }
    ctx->pc = 0x1C3D24u;
}
