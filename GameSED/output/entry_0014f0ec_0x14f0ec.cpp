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

// Function: entry_0014f0ec
// Address: 0x14f0ec - 0x14f124
void entry_0014f0ec_0x14f0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f0ec_0x14f0ec");
#endif

    ctx->pc = 0x14f0ecu;

    // 0x14f0ec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14f0f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f0f4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14F0F4u;
    {
        const bool branch_taken_0x14f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f0f4) {
            ctx->pc = 0x14F0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0F4u;
            // 0x14f0f8: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            return;
        }
    }
    ctx->pc = 0x14F0FCu;
    // 0x14f0fc: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f100: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x14f104: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x14f104u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14f108: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f10c: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x14f10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14f110: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F110u;
    {
        const bool branch_taken_0x14f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f110) {
            ctx->pc = 0x14F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F110u;
            // 0x14f114: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            return;
        }
    }
    ctx->pc = 0x14F118u;
    // 0x14f118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f11c: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x14f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
    // 0x14f120: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    ctx->pc = 0x14f124u;
}
