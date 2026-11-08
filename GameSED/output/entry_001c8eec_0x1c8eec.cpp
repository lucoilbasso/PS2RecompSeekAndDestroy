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

// Function: entry_001c8eec
// Address: 0x1c8eec - 0x1c8f48
void entry_001c8eec_0x1c8eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8eec_0x1c8eec");
#endif

    ctx->pc = 0x1c8eecu;

    // 0x1c8eec: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C8EECu;
    {
        const bool branch_taken_0x1c8eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EECu;
        // 0x1c8ef0: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eec) {
            ctx->pc = 0x1C8F48u;
            return;
        }
    }
    ctx->pc = 0x1C8EF4u;
    // 0x1c8ef4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8ef8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8efc: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x1c8f00: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8f04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c8f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8f08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c8f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c8f0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c8f10: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c8f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8f18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8f1c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x1c8f1cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x1c8f20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8f24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8f28: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x1c8f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x1c8f2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c8f2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c8f30: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x1c8f30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x1c8f34: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1c8f34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c8f38: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8f3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8f40: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x1c8f40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x1c8f44: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x1c8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
    ctx->pc = 0x1c8f48u;
}
