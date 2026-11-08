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

// Function: entry_001ac01c
// Address: 0x1ac01c - 0x1ac068
void entry_001ac01c_0x1ac01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac01c_0x1ac01c");
#endif

    ctx->pc = 0x1ac01cu;

    // 0x1ac01c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ac020: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac024: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x1ac024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x1ac028: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ac028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ac02c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1ac02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1ac030: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x1ac030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ac034: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac038: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ac038u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ac03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac040: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ac044: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC044u;
    {
        const bool branch_taken_0x1ac044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC044u;
        // 0x1ac048: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac044) {
            ctx->pc = 0x1AC07Cu;
            return;
        }
    }
    ctx->pc = 0x1AC04Cu;
    // 0x1ac04c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ac054: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ac058: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1ac058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ac05c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1ac05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1ac060: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AC060u;
    {
        const bool branch_taken_0x1ac060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC060u;
        // 0x1ac064: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac060) {
            ctx->pc = 0x1AC08Cu;
            return;
        }
    }
    ctx->pc = 0x1AC068u;
}
