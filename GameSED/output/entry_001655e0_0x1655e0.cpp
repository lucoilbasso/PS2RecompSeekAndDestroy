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

// Function: entry_001655e0
// Address: 0x1655e0 - 0x165620
void entry_001655e0_0x1655e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001655e0_0x1655e0");
#endif

    ctx->pc = 0x1655e0u;

    // 0x1655e0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1655e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1655e4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1655E4u;
    {
        const bool branch_taken_0x1655e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655e4) {
            ctx->pc = 0x1655E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655E4u;
            // 0x1655e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x1655ECu;
    // 0x1655ec: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
    // 0x1655f0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1655F0u;
    {
        const bool branch_taken_0x1655f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655f0) {
            ctx->pc = 0x1655F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655F0u;
            // 0x1655f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x1655F8u;
    // 0x1655f8: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1655fc: 0x2c42005b  sltiu       $v0, $v0, 0x5B
    ctx->pc = 0x1655fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x165600: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x165600u;
    {
        const bool branch_taken_0x165600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165600) {
            ctx->pc = 0x165604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165600u;
            // 0x165604: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165620u;
            return;
        }
    }
    ctx->pc = 0x165608u;
    // 0x165608: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x16560c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x165610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165614: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165614u;
    {
        const bool branch_taken_0x165614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165614) {
            ctx->pc = 0x165618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165614u;
            // 0x165618: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x16561Cu;
    // 0x16561c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->pc = 0x165620u;
}
