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

// Function: entry_0012dad0
// Address: 0x12dad0 - 0x12db14
void entry_0012dad0_0x12dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dad0_0x12dad0");
#endif

    ctx->pc = 0x12dad0u;

    // 0x12dad0: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x12dad4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12dad8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12dadc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x12dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x12dae0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12dae4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x12dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x12dae8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x12dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x12daec: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12daf0: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x12daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x12daf4: 0x708820e8  pminw       $a0, $a0, $t0
    ctx->pc = 0x12daf4u;
    SET_GPR_VEC(ctx, 4, PS2_PMINW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x12daf8: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x12daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x12dafc: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DAFCu;
    {
        const bool branch_taken_0x12dafc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAFCu;
        // 0x12db00: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dafc) {
            ctx->pc = 0x12DB14u;
            return;
        }
    }
    ctx->pc = 0x12DB04u;
    // 0x12db04: 0x93a20113  lbu         $v0, 0x113($sp)
    ctx->pc = 0x12db04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 275)));
    // 0x12db08: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x12db08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12db0c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x12db0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x12db10: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x12db10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12db14u;
}
