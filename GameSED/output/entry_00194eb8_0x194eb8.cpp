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

// Function: entry_00194eb8
// Address: 0x194eb8 - 0x194ed8
void entry_00194eb8_0x194eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194eb8_0x194eb8");
#endif

    ctx->pc = 0x194eb8u;

    // 0x194eb8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x194eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x194ebc: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x194ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x194ec0: 0x30484000  andi        $t0, $v0, 0x4000
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x194ec4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x194ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x194ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194EC8u;
    {
        const bool branch_taken_0x194ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EC8u;
        // 0x194ecc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ec8) {
            ctx->pc = 0x194ED8u;
            return;
        }
    }
    ctx->pc = 0x194ED0u;
    // 0x194ed0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x194ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x194ed4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x194ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->pc = 0x194ed8u;
}
