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

// Function: entry_00164f90
// Address: 0x164f90 - 0x164fb0
void entry_00164f90_0x164f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f90_0x164f90");
#endif

    ctx->pc = 0x164f90u;

    // 0x164f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164f94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164f98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x164f9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x164f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x164fa0: 0x8e1401b0  lw          $s4, 0x1B0($s0)
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x164fa4: 0x1a800068  blez        $s4, . + 4 + (0x68 << 2)
    ctx->pc = 0x164FA4u;
    {
        const bool branch_taken_0x164fa4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x164FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA4u;
        // 0x164fa8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fa4) {
            ctx->pc = 0x165148u;
            return;
        }
    }
    ctx->pc = 0x164FACu;
    // 0x164fac: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    ctx->pc = 0x164fb0u;
}
