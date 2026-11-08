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

// Function: entry_00148ab4
// Address: 0x148ab4 - 0x148af0
void entry_00148ab4_0x148ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ab4_0x148ab4");
#endif

    ctx->pc = 0x148ab4u;

    // 0x148ab4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x148ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x148ab8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x148ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x148abc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x148abcu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x148ac0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x148ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x148ac4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x148AC4u;
    {
        const bool branch_taken_0x148ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AC4u;
        // 0x148ac8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ac4) {
            ctx->pc = 0x148B28u;
            return;
        }
    }
    ctx->pc = 0x148ACCu;
    // 0x148acc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148ad0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148ad4: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x148ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x148ad8: 0x244343c0  addiu       $v1, $v0, 0x43C0
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x148adc: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x148adcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x148ae0: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x148ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x148ae4: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x148ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x148ae8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148aec: 0x0  nop
    ctx->pc = 0x148aecu;
    // NOP
    ctx->pc = 0x148af0u;
}
