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

// Function: entry_001cb934
// Address: 0x1cb934 - 0x1cb970
void entry_001cb934_0x1cb934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb934_0x1cb934");
#endif

    ctx->pc = 0x1cb934u;

label_1cb934:
    // 0x1cb934: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1cb934u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb938: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1cb938u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cb93c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1cb93cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cb940: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cb944: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1cb944u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1cb948: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cb948u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cb94c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1cb94cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1cb950: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cb950u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cb954: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1cb958: 0x0  nop
    ctx->pc = 0x1cb958u;
    // NOP
    // 0x1cb95c: 0x0  nop
    ctx->pc = 0x1cb95cu;
    // NOP
    // 0x1cb960: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB960u;
    {
        const bool branch_taken_0x1cb960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB960u;
        // 0x1cb964: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb960) {
            ctx->pc = 0x1CB934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb934;
        }
    }
    ctx->pc = 0x1CB968u;
    // 0x1cb968: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1CB968u;
    {
        const bool branch_taken_0x1cb968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB968u;
        // 0x1cb96c: 0xae220478  sw          $v0, 0x478($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb968) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB970u;
}
