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

// Function: entry_00122950
// Address: 0x122950 - 0x122978
void entry_00122950_0x122950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122950_0x122950");
#endif

    ctx->pc = 0x122950u;

    // 0x122950: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x122950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122954: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x122954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x122958: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x122958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12295c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x12295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x122960: 0x8c520160  lw          $s2, 0x160($v0)
    ctx->pc = 0x122960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x122964: 0x124001c8  beqz        $s2, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x122964u;
    {
        const bool branch_taken_0x122964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122964u;
        // 0x122968: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122964) {
            ctx->pc = 0x123088u;
            return;
        }
    }
    ctx->pc = 0x12296Cu;
    // 0x12296c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122970: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122974: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x122978u;
}
