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

// Function: entry_0014c018
// Address: 0x14c018 - 0x14c050
void entry_0014c018_0x14c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c018_0x14c018");
#endif

    ctx->pc = 0x14c018u;

    // 0x14c018: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x14c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x14c01c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x14c01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14c020: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x14c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14c024: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14c028: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x14c028u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x14c02c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x14c030: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14c030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14c034: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x14c034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x14c038: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C038u;
    {
        const bool branch_taken_0x14c038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c038) {
            ctx->pc = 0x14C03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C038u;
            // 0x14c03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C050u;
            return;
        }
    }
    ctx->pc = 0x14C040u;
    // 0x14c040: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x14c044: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14c048: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c04c: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x14c04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
    ctx->pc = 0x14c050u;
}
